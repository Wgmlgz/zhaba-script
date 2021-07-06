#pragma once
#include <random>

#include "BinSearchTree.h"

double dRand(double fMin = 0.0, double fMax = 1.0) {
  double f = (double)rand() / RAND_MAX;
  return fMin + f * (fMax - fMin);
}

template <typename T>
class TreapNode : public BinTreeNode<T> {
 public:
  using nodeptr = TreapNode<T>*;
  double priority;

  TreapNode<T>*& lhs() { return (TreapNode<T>*&)(this->branches[0]); }
  TreapNode<T>*& rhs() { return (TreapNode<T>*&)(this->branches[1]); }

  TreapNode(T new_data, nodeptr new_left = nullptr,
            nodeptr new_right = nullptr) {
    this->data = new_data;
    priority = dRand();
    lhs() = new_left;
    rhs() = new_right;
  }
  TreapNode(T new_data, double new_priority, nodeptr new_left = nullptr,
            nodeptr new_right = nullptr) {
    this->data = new_data;
    priority = new_priority;
    lhs() = new_left;
    rhs() = new_right;
  }

  virtual TreapNode<T>* clone() override {
    std::vector<TreeNode<T>*> cloned_branches;
    for (auto& i : BinTreeNode<T>::TreeNode::branches) {
      if (i)
        cloned_branches.push_back(static_cast<TreapNode<T>*>(i)->clone());
      else
        cloned_branches.push_back(nullptr);
    }
    TreapNode<T>* cloned_node = new TreapNode<T>(this->data, priority);
    static_cast<TreeNode<T>*>(cloned_node)->branches = cloned_branches;
    cloned_node->id = BinTreeNode<T>::TreeNode::id;
    return cloned_node;
  }
};

template <typename T>
class Treap : public BinSearchTree<T> {
 public:
  using nodeptr = TreapNode<T>*;
  std::function<void(nodeptr, nodeptr)> on_split = [](nodeptr, nodeptr) {};
  std::function<void()> on_clone = []() {};
  nodeptr& getRoot() { return (nodeptr&)this->root; }
  void split(nodeptr node, T val, nodeptr& lhs, nodeptr& rhs) {
    if (!node) {
      lhs = rhs = nullptr;
    } else {
      if (val < node->data) {
        split(node->lhs(), val, lhs, node->lhs()), rhs = node;
      } else {
        split(node->rhs(), val, node->rhs(), rhs), lhs = node;
      }
    }
  }
  void merge(nodeptr& t, nodeptr lhs, nodeptr rhs) {
    if (!lhs || !rhs)
      t = lhs ? lhs : rhs;
    else if (lhs->priority > rhs->priority)
      merge(lhs->rhs(), lhs->rhs(), rhs), t = lhs;
    else
      merge(rhs->lhs(), lhs, rhs->lhs()), t = rhs;
  }
  void insert(nodeptr& node, nodeptr it) {
    this->on_insert(node);
    if (!node)
      node = it;
    else if (it->priority > node->priority) {
      split(node, it->data, it->lhs(), it->rhs()), node = it;

    } else {
      insert(it->data < node->data ? node->lhs() : node->rhs(), it);
    }
  }

  virtual void insert(T insert_data) override {
    nodeptr new_node = new TreapNode<T>(insert_data);
    if (getRoot()) {
      insert(getRoot(), new_node);
      this->on_insert_place_found();
      this->last_inserted_node = new_node;
    } else {
      getRoot() = new_node;
    }
  }
  void remove(nodeptr& t, T val) {
    if (t->data == val) {
      nodeptr th = t;
      merge(t, t->lhs(), t->rhs());
      delete th;
    } else {
      remove(val < t->data ? t->lhs() : t->rhs(), val);
    }
  }
  virtual void remove(T val) override {
      remove(getRoot(), val);
  }
  nodeptr next(T input, nodeptr node) {
    if (!node) return nullptr;
    if (node->data < input) return nullptr;
    auto t = next(input, node->get_lhs());
    return t ? t : node;
  }
  nodeptr next(T input) { return next(input, getRoot()); }
};