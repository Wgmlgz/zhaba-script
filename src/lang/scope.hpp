#pragma once
#include <array>
#include <iostream>
#include <map>
#include <ranges>
#include <set>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <unordered_map>

#include "../libs/json.hpp"
#include "types.hpp"

using json = nlohmann::json;

struct Function;
void to_json(json& j, const Function* generic);

namespace types {
struct Generic;
void to_json(json& j, const types::Generic* generic);
}

int64_t genId();

class Scope {
  std::vector<const Scope*> parents;
  std::array<void*, 13> dynamic_containers_ptrs;

  template <std::size_t ID, template <typename...> class C, typename K,
            typename V = void>
  class DynamicContainer {
#define PARENTS                                                               \
  scope->parents | std::views::transform([](const Scope* p) {             \
    return static_cast<DynamicContainer*>(p->dynamic_containers_ptrs.at(ID)); \
  })
   public:
    bool empty() const { return !ptr; }

    C<K, V>& get() {
      if (!ptr) ptr = new C<K, V>();
      return const_cast<C<K, V>&>(*ptr);
    }
    const C<K, V>& get() const {
      return const_cast<const C<K, V>&>(
          const_cast<DynamicContainer*>(this)->get());
    }

    bool contains(const K& key) const {
      if (ptr && ptr->contains(key)) return true;
      for (const auto parent : PARENTS)
        if (parent && parent->contains(key)) return true;
      return false;
    }

    const V& at(const K& key) const {
      if (ptr && ptr->contains(key)) return ptr->at(key);
      for (const auto parent : PARENTS)
        if (parent->contains(key)) return parent->at(key);
      throw std::runtime_error("DynamicContainer error");
    }

    V& at(const K& key) {
      return const_cast<V&>(
          const_cast<const DynamicContainer*>(this)->at(key));
    }

    void emplace(auto&&... args) { get().emplace(args...); }

    void operator=(const auto& other) { ptr = new C<K, V>(other); }

    DynamicContainer(Scope* new_scope) : scope(new_scope) {}

    friend void to_json(json& j, const DynamicContainer& container) {
      if (container.empty()) {
        j = nullptr;
        return;
      }
      for (const auto& [key, val] : container.get()) {
        json t;
        t["key"] = key;
        t["val"] = val;
        j.push_back(t);
      }
    }

   private:
    const mutable C<K, V>* ptr = nullptr;
    Scope* scope;
#undef PARENTS
  };

 public:
  struct VarInfo {
    std::string name;
    types::Type type;
    int64_t id;

    friend void to_json(json& j, const VarInfo* var_info) {
      j = {
          {"__ptr__", reinterpret_cast<std::uintptr_t>(&var_info)},
          {"name", var_info->name},
          {"type", var_info->type},
          {"id", var_info->id},
      };
    }
  };

 public:
  /** Variables, owns `VarInfo*` */
  DynamicContainer<0, std::map, std::string, VarInfo*> vars;
  /** Helper, provides variables access by id,
   * DON'T owns `VarInfo*`,
   * recoverable from `vars`
   */
  DynamicContainer<1, std::map, int64_t, VarInfo*> vars_id;

  /** Defined types owns `types::TYPE` (aka `types::TypeInfo*`) */
  DynamicContainer<2, std::map, std::string, types::TYPE> types;
  /** Typedefs (types aliases)` */
  DynamicContainer<3, std::map, std::string, types::Type> typedefs;
  /** Generic types definitions, owns `types::Generic*` */
  DynamicContainer<4, std::map, std::string, types::Generic*> generics;

  /** Binary operators priorities */
  DynamicContainer<5, std::map, std::string, int64_t> bin_operators;
  /** Prefix operators priorities */
  DynamicContainer<6, std::map, std::string, int64_t> prefix_operators;
  /** Postfix operators priorities */
  DynamicContainer<7, std::map, std::string, int64_t> postfix_operators;

  /** Binary operators, owns `Function*` */
  DynamicContainer<8, std::map, types::FnHead, Function*> B_OD_;
  /** Prefix operators, owns `Function*` */
  DynamicContainer<9, std::map, types::FnHead, Function*> PR_OD_;
  /** Postfix operators, owns `Function*` */
  DynamicContainer<10, std::map, types::FnHead, Function*> PO_OD_;
  /** Functions, owns `Function*` */
  DynamicContainer<11, std::map, types::FnHead, Function*> FN_OD_;

  /** Last defined binary operator by name, DON'T owns `Function*` */
  DynamicContainer<12, std::map, std::string, Function*> last_fn;


  Scope(const Scope* new_parent);
  Scope(const Scope&) = delete;
  Scope(const Scope&&) = delete;
  void addParent(const Scope* new_parent);

  bool containsOp(const std::string& op_name) {
    return bin_operators.contains(op_name) ||
           prefix_operators.contains(op_name) || postfix_operators.contains(op_name);
  }
#define MAKE_SCOPE_ACCESS_OP(property, properties, display, container)        \
  bool contains##property(const types::FnHead& name) const {                  \
    if (container.contains(name)) return true;                                \
    for (const auto parent : parents) {                                       \
      bool f = parent->contains##property(name);                              \
      if (f) return true;                                                     \
    }                                                                         \
    return false;                                                             \
  }                                                                           \
  const Function*& get##property(const types::FnHead& name) const {           \
    if (container.contains(name))                                             \
      return const_cast<const Function*&>(container.at(name));                \
    for (const auto parent : parents) {                                       \
      bool b = parent->contains##property(name);                              \
      if (b) return parent->get##property(name);                              \
    }                                                                         \
    throw std::runtime_error(#display " is not defined in this scope");       \
  }                                                                           \
  Function*& get##property(const types::FnHead& name) {                       \
    return const_cast<Function*&>(                                            \
        static_cast<const Scope&>(*this).get##property(name));            \
  }                                                                           \
  void set##property(const types::FnHead& name, Function*& val) {             \
    if (container.contains(name))                                             \
      throw std::runtime_error(#display " is already defined in this scope"); \
    container.emplace(name, val);                                             \
    last_fn.emplace(name.name, val);                                          \
  }

  MAKE_SCOPE_ACCESS_OP(BinOp, BinOps, binary_operator, B_OD_);
  MAKE_SCOPE_ACCESS_OP(PrOp, PrOps, prefix_operator, PR_OD_);
  MAKE_SCOPE_ACCESS_OP(PoOp, PoOps, postfix_operator, PO_OD_);
  MAKE_SCOPE_ACCESS_OP(Fn, Fns, function, FN_OD_);

  bool containsVar(const std::string& name) const {
    if (vars.contains(name)) return true;
    for (const auto parent : parents) {
      bool f = parent->containsVar(name);
      if (f) return true;
    }
    return false;
  }

  const types::Type& getVarType(const std::string& name) const {
    if (vars.contains(name)) return vars.at(name)->type;
    for (const auto parent : parents)
      return const_cast<types::Type&>(parent->getVarType(name));
    throw std::runtime_error("variable '" + name + "'" +
                             "is not defined in this scope");
  }

  types::Type& getVarType(const std::string& name) {
    return const_cast<types::Type&>(
        static_cast<const Scope&>(*this).getVarType(name));
  }

  const int64_t& getVarId(const std::string& name) const {
    if (vars.contains(name)) return vars.at(name)->id;
    for (const auto parent : parents) {
      bool b = parent->containsVar(name);
      if (b) return const_cast<int64_t&>(parent->getVarId(name));
    }
    throw std::runtime_error("variable '" + name + "'" +
                             "is not defined in this scope");
  }

  bool containsVar(const int64_t& id) const {
    if (vars_id.contains(id)) return true;
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return true;
    }
    return false;
  }

  const std::string& getVarName(int64_t id) const {
    if (vars_id.contains(id)) return vars_id.at(id)->name;
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return const_cast<std::string&>(parent->getVarName(id));
    }
    throw std::runtime_error("variable '" + std::to_string(id) + "'" +
                             "is not defined in this scope");
  }

  const VarInfo* const& getVarInfo(int64_t id) const {
    if (vars_id.contains(id)) return vars_id.at(id);
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return parent->getVarInfo(id);
    }
    throw std::runtime_error("variable '" + std::to_string(id) + "'" +
                             "is not defined in this scope");
  }



  const types::Type& getVarType(const int64_t& id) const {
    if (vars_id.contains(id)) return vars_id.at(id)->type;
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return parent->getVarType(id);
    }
    throw std::runtime_error("variable '" + std::to_string(id) + "'" +
                             "is not defined in this scope");
  }

  types::Type& getVarType(const int64_t& id) {
    return const_cast<types::Type&>(static_cast<const Scope&>(*this).
                                        getVarType(id));
  }

  void setVar(const std::string& name, const types::Type& val) {
    if (vars.contains(name))
      throw std::runtime_error("variable '" + name + "'" +
                               "is already defined in this scope");
    auto info = new VarInfo{name, val, genId()};
    vars.emplace(name, info);
    vars_id.emplace(info->id, info);
  }

  const auto getVars() { return vars.get(); }

  /** Collects all variables including `last` scope */
  void collectVars(Scope* last,
                   std::unordered_map<int64_t, VarInfo*>& push_map) const {
    // std::cout << sizeof(Scope) << std::endl;
    for (const auto i : vars_id.get()) push_map.emplace(i);
    if (this == last) return;
    for (const auto parent : parents) parent->collectVars(last, push_map);
  }

};

void to_json(json& j, const Scope& p);