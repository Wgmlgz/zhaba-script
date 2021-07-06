#pragma once
#include "BinSearchTree.h"
#include <iostream>

template<typename T>
class RBNode :public BinTreeNode<T> {
public:
  RBNode*& lhs() { return (RBNode<T>*&)(this->branches[0]); }
  RBNode*& rhs() { return (RBNode<T>*&)(this->branches[1]); }

  RBNode() {}
  RBNode* parent;
  int color; // 1 -> Red, 0 -> Black

  virtual RBNode<T>* clone() override {
    std::vector<TreeNode<T>*> cloned_branches;
    for (auto& i : BinTreeNode<T>::TreeNode::branches) {
      if (i) cloned_branches.push_back(static_cast<RBNode<T>*>(i)->clone());
      else cloned_branches.push_back(nullptr);
    }
    RBNode<T>* cloned_node =
      new RBNode<T>();
    static_cast<TreeNode<T>*>(cloned_node)->branches = cloned_branches;
    cloned_node->data = this->data;
    cloned_node->id = this->id;
    cloned_node->parent = parent;
    cloned_node->color = color;
    return cloned_node;
  }

};


template<typename T>
class RBTree : public BinSearchTree<T> {
public:
  using nodeptr = RBNode<T>*;
  using BinSearchTree<T>::rrot;
  using BinSearchTree<T>::lrot;

  nodeptr& getRoot() {
    return (nodeptr&)this->root;
  }
private:
  void fixDelete(nodeptr x) {
    nodeptr s;
    while (x != getRoot() && x->color == 0) {
      if (x == x->parent->lhs()) {
        s = x->parent->rhs();
        if (s->color == 1) {
          // case 3.1
          s->color = 0;
          x->parent->color = 1;
          lrotRB(x->parent);
          s = x->parent->rhs();
        }

        if (s->lhs()->color == 0 && s->rhs()->color == 0) {
          // case 3.2
          s->color = 1;
          x = x->parent;
        } else {
          if (s->rhs()->color == 0) {
            // case 3.3
            s->lhs()->color = 0;
            s->color = 1;
            rrotRB(s);
            s = x->parent->rhs();
          }

          // case 3.4
          s->color = x->parent->color;
          x->parent->color = 0;
          s->rhs()->color = 0;
          lrotRB(x->parent);
          x = getRoot();
        }
      } else {
        s = x->parent->lhs();
        if (s->color == 1) {
          // case 3.1
          s->color = 0;
          x->parent->color = 1;
          rrotRB(x->parent);
          s = x->parent->lhs();
        }

        if (s->rhs()->color == 0 && s->rhs()->color == 0) {
          // case 3.2
          s->color = 1;
          x = x->parent;
        } else {
          if (s->lhs()->color == 0) {
            // case 3.3
            s->rhs()->color = 0;
            s->color = 1;
            lrotRB(s);
            s = x->parent->lhs();
          }

          // case 3.4
          s->color = x->parent->color;
          x->parent->color = 0;
          s->lhs()->color = 0;
          rrotRB(x->parent);
          x = getRoot();
        }
      }
    }
    x->color = 0;
  }


  void rbTransplant(nodeptr u, nodeptr v) {
    if (u->parent == nullptr) {
      getRoot() = v;
    } else if (u == u->parent->lhs()) {
      u->parent->lhs() = v;
    } else {
      u->parent->rhs() = v;
    }
    v->parent = u->parent;
  }

  void deleteNodeHelper(nodeptr node, T key) {
    nodeptr z = nullptr;
    nodeptr x, y;
    while (node != nullptr) {
      if (node->data == key)
        z = node;

      node = node->data <= key ? node->rhs() : node->lhs();
    }

    if (z == nullptr) {
      std::cout << "Couldn't find key in the tree" << std::endl;
      return;
    }

    y = z;
    int y_original_color = y->color;
    if (z->lhs() == nullptr) {
      x = z->rhs();
      rbTransplant(z, z->rhs());
    } else if (z->rhs() == nullptr) {
      x = z->lhs();
      rbTransplant(z, z->lhs());
    } else {
      y = minimum(z->rhs());
      y_original_color = y->color;
      x = y->rhs();
      if (y->parent == z) {
        x->parent = y;
      } else {
        rbTransplant(y, y->rhs());
        y->rhs() = z->rhs();
        y->rhs()->parent = y;
      }

      rbTransplant(z, y);
      y->lhs() = z->lhs();
      y->lhs()->parent = y;
      y->color = z->color;
    }
    delete z;
    if (y_original_color == 0) {
      fixDelete(x);
    }
  }

  void fixInsert(nodeptr k) {
    nodeptr u;
    while (k->parent->color == 1) {
      if (k->parent == k->parent->parent->rhs()) {
        u = k->parent->parent->lhs();
        if (u and u->color == 1) {
          // case 3.1
          u->color = 0;
          k->parent->color = 0;
          k->parent->parent->color = 1;
          k = k->parent->parent;
        } else {
          if (k == k->parent->lhs()) {
            // case 3.2.2
            k = k->parent;
            rrotRB(k);
          }
          // case 3.2.1
          k->parent->color = 0;
          k->parent->parent->color = 1;
          lrotRB(k->parent->parent);
        }
      } else {
        u = k->parent->parent->rhs();

        if (u and u->color == 1) {
          // mirror case 3.1
          u->color = 0;
          k->parent->color = 0;
          k->parent->parent->color = 1;
          k = k->parent->parent;
        } else {
          if (k == k->parent->rhs()) {
            // mirror case 3.2.2
            k = k->parent;
            lrotRB(k);
          }
          // mirror case 3.2.1
          k->parent->color = 0;
          k->parent->parent->color = 1;
          rrotRB(k->parent->parent);
        }
      }
      if (k == getRoot()) {
        break;
      }
    }
    getRoot()->color = 0;
  }

public:
  RBTree() {
    // nullptr = new RBNode<T>();
    // nullptr->color = 0;
    // nullptr->lhs() = nullptr;
    // nullptr->data = -666;
    // nullptr->rhs() = nullptr;
    getRoot() = nullptr;
  }

  nodeptr minimum(nodeptr node) {
    while (node->lhs() != nullptr) {
      node = node->lhs();
    }
    return node;
  }

  nodeptr maximum(nodeptr node) {
    while (node->rhs() != nullptr) {
      node = node->rhs();
    }
    return node;
  }

  void lrotRB(nodeptr x) {
    nodeptr y = x->rhs();
    x->rhs() = y->lhs();
    if (y->lhs() != nullptr) {
      y->lhs()->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == nullptr) {
      this->getRoot() = y;
    } else if (x == x->parent->lhs()) {
      x->parent->lhs() = y;
    } else {
      x->parent->rhs() = y;
    }
    y->lhs() = x;
    x->parent = y;
  }

  void rrotRB(nodeptr x) {
    nodeptr y = x->lhs();
    x->lhs() = y->rhs();
    if (y->rhs() != nullptr)
      y->rhs()->parent = x;
    y->parent = x->parent;
    if (x->parent == nullptr)
      this->getRoot() = y;
    else if (x == x->parent->rhs())
      x->parent->rhs() = y;
    else
      x->parent->lhs() = y;
    y->rhs() = x;
    x->parent = y;
  }

  virtual void insert(T key) override {
    nodeptr node = new RBNode<T>();
    this->last_inserted_node = node;
    node->parent = nullptr;
    node->data = key;
    node->lhs() = nullptr;
    node->rhs() = nullptr;
    node->color = 1;

    nodeptr y = nullptr;
    nodeptr x = this->getRoot();

    while (x != nullptr) {
      y = x;
      this->on_insert(y);
      if (node->data < x->data)
        x = x->lhs();
      else
        x = x->rhs();
    }

    node->parent = y;
    if (y == nullptr) {
      getRoot() = node;
    } else if (node->data < y->data) {
      y->lhs() = node;
    } else {
      y->rhs() = node;
    }
    this->on_insert_place_found();
    if (node->parent == nullptr) {
      node->color = 0;
      return;
    }

    if (node->parent->parent == nullptr)
      return;

    fixInsert(node);
  }

  virtual void remove(T data) override {
    deleteNodeHelper(this->getRoot(), data);
  }
};