#pragma once
#include <array>
#include <iostream>
#include <map>
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
  std::array<void*, 12> dynamic_containers_ptrs;

  template <std::size_t ID, template <typename...> class C, typename K,
            typename V = void>
  class DynamicContainer {

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
      for (const auto p : scope->parents) {
        if (static_cast<DynamicContainer*>(p->dynamic_containers_ptrs.at(ID))
                ->contains(key))
          return true;
      }
      return false;
    }

    const V& at(const K& key) const {
      if (ptr && ptr->contains(key)) return ptr->at(key);
      for (const auto p : scope->parents) {
        auto parent =
            static_cast<DynamicContainer*>(p->dynamic_containers_ptrs.at(ID));
        if (parent->contains(key)) return parent->at(key);
      }
      throw std::runtime_error("DynamicContainer error");
    }

    V& at(const K& key) {
      return const_cast<V&>(
          const_cast<const DynamicContainer*>(this)->at(key));
    }

    template <typename... Args>
    void emplace(Args&&... args) {
      get().emplace(args...);
    }

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
  DynamicContainer<0, std::unordered_map, std::string, VarInfo*> vars;
  /** Helper, provides variables access by id,
   * DON'T owns `VarInfo*`,
   */
  DynamicContainer<1, std::unordered_map, int64_t, VarInfo*> vars_id;

  /** Defined types owns `types::TYPE` (aka `types::TypeInfo*`) */
  DynamicContainer<2, std::unordered_map, std::string, types::TYPE> types;
  /** Typedefs (types aliases)` */
  DynamicContainer<3, std::unordered_map, std::string, types::Type> typedefs;
  /** Generic types definitions, owns `types::Generic*` */
  DynamicContainer<4, std::unordered_map, std::string, types::Generic*> generics;

  /** Binary operators priorities */
  DynamicContainer<5, std::unordered_map, std::string, int64_t> bin_operators;
  /** Prefix operators priorities */
  DynamicContainer<6, std::unordered_map, std::string, int64_t>
      prefix_operators;
  /** Postfix operators priorities */
  DynamicContainer<7, std::unordered_map, std::string, int64_t> postfix_operators;

  /** Binary operators, owns `Function*` */
  DynamicContainer<8, std::map, types::FnHead, Function*> B_OP;
  /** Prefix operators, owns `Function*` */
  DynamicContainer<9, std::map, types::FnHead, Function*> PR_OP;
  /** Postfix operators, owns `Function*` */
  DynamicContainer<10, std::map, types::FnHead, Function*> PO_OP;

  /** Last defined binary operator by name, DON'T owns `Function*` */
  DynamicContainer<11, std::unordered_map, std::string, Function*> last_fn;

  Scope(const Scope* new_parent);
  Scope(const Scope&) = delete;
  Scope(const Scope&&) = delete;
  void addParent(const Scope* new_parent);

  bool containsOp(const std::string& op_name) {
    return bin_operators.contains(op_name) ||
           prefix_operators.contains(op_name) || postfix_operators.contains(op_name);
  }

  void setBinOp(const types::FnHead& name, Function*& val) {
    if (B_OP.contains(name))
      throw std::runtime_error(
          "binary_operator is already defined in this scope");
    B_OP.emplace(name, val);
    last_fn.emplace(name.name, val);
  }
  void setPrOp(const types::FnHead& name, Function*& val) {
    if (PR_OP.contains(name))
      throw std::runtime_error(
          "prefix_operator is already defined in this scope");
    PR_OP.emplace(name, val);
    last_fn.emplace(name.name, val);
  }
  void setPoOp(const types::FnHead& name, Function*& val) {
    if (PO_OP.contains(name))
      throw std::runtime_error(
          "postfix_operator is already defined in this scope");
    PO_OP.emplace(name, val);
    last_fn.emplace(name.name, val);
  }
  void setVar(const std::string& name, const types::Type& val) {
    if (vars.contains(name))
      throw std::runtime_error("variable '" + name + "'" +
                               "is already defined in this scope");
    auto info = new VarInfo{name, val, genId()};
    vars.emplace(name, info);
    vars_id.emplace(info->id, info);
  }

  /** Collects all variables including `last` scope */
  void collectVars(Scope* last,
                   std::unordered_map<int64_t, VarInfo*>& push_map) const {
    for (const auto i : vars_id.get()) push_map.emplace(i);
    if (this == last) return;
    for (const auto parent : parents) parent->collectVars(last, push_map);
  }

};

void to_json(json& j, const Scope& p);