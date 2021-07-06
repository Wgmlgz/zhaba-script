#pragma once
#include <functional>
#include <iostream>

#include "BinSearchTree.h"
#include "BinTree.h"

template <typename T>
class AVLTreeNode : public BinTreeNode<T> {
 public:
  int height = 1;
  AVLTreeNode<T> *&lhs() { return (AVLTreeNode<T> *&)(this->branches[0]); }
  AVLTreeNode<T> *&rhs() { return (AVLTreeNode<T> *&)(this->branches[1]); }

  AVLTreeNode(T new_data) { BinTreeNode<T>::TreeNode::data = new_data; }
  virtual AVLTreeNode<T> *clone() override {
    std::vector<TreeNode<T> *> cloned_branches;
    for (auto &i : BinTreeNode<T>::TreeNode::branches) {
      if (i)
        cloned_branches.push_back(static_cast<AVLTreeNode<T> *>(i)->clone());
      else
        cloned_branches.push_back(nullptr);
    }
    AVLTreeNode<T> *cloned_node = new AVLTreeNode<T>(this->data);
    static_cast<TreeNode<T> *>(cloned_node)->branches = cloned_branches;
    cloned_node->id = BinTreeNode<T>::TreeNode::id;
    cloned_node->height = height;
    return cloned_node;
  }
};

template <typename T>
class AVLTree : public BinSearchTree<T> {
  using nodeptr = AVLTreeNode<T> *;

 public:
  nodeptr &getRoot() { return (nodeptr &)this->root; }

  std::function<void(nodeptr node)> on_balance = [](nodeptr) {};

  static int bf(nodeptr node) {
    return height(node->rhs()) - height(node->lhs());
  }
  void fixHeight(nodeptr node) {
    node->height = 1 + std::max(height(node->rhs()), height(node->lhs()));
  }

 private:
  static int height(nodeptr node) { return node ? node->height : 0; }
  void fixHeight(nodeptr a, nodeptr b) {
    fixHeight(a);
    fixHeight(b);
  }
  nodeptr rrotAVL(nodeptr node) {
    nodeptr tmp = static_cast<nodeptr>(
        BinSearchTree<T>::rrot(static_cast<BinTreeNode<T> *>(node)));
    fixHeight(node, tmp);
    return tmp;
  }
  nodeptr lrotAVL(nodeptr node) {
    nodeptr tmp = static_cast<nodeptr>(
        BinSearchTree<T>::lrot(static_cast<BinTreeNode<T> *>(node)));
    fixHeight(node, tmp);
    return tmp;
  }
  nodeptr balance(nodeptr node) {
    fixHeight(node);
    on_balance(node);
    if (bf(node) == 2) {
      if (bf(node->rhs()) < 0) node->rhs() = (rrotAVL(node->rhs()));
      return lrotAVL(node);
    } else if (bf(node) == -2) {
      if (bf(node->lhs()) > 0) node->lhs() = (lrotAVL(node->lhs()));
      return rrotAVL(node);
    }
    return node;
  }

  nodeptr insert(nodeptr node, T insert_data) {
    if (!node) {
      this->last_inserted_node = new AVLTreeNode<T>(insert_data);
      return static_cast<nodeptr>(this->last_inserted_node);
    }
    this->on_insert(node);
    if (insert_data < node->data)
      node->lhs() = insert(node->lhs(), insert_data);
    else if (insert_data > node->data)
      node->rhs() = insert(node->rhs(), insert_data);
    else
      return node;
    this->on_insert_place_found();
    return balance(node);
  }
  nodeptr minValueNode(nodeptr node) {
    nodeptr current = node;
    while (current->lhs() != nullptr) current = current->lhs();
    return current;
  }

  nodeptr findmin(nodeptr p) { return p->lhs() ? findmin(p->lhs()) : p; }

  nodeptr removeMin(nodeptr p) {
    if (!p->lhs()) return p->rhs();
    p->lhs() = removeMin(p->lhs());
    return balance(p);
  }
  nodeptr remove(nodeptr p, int k) {
    if (!p) return nullptr;
    if (k < p->data)
      p->lhs() = remove(p->lhs(), k);
    else if (k > p->data)
      p->rhs() = remove(p->rhs(), k);
    else {
      nodeptr l = p->lhs();
      nodeptr r = p->rhs();
      delete p;
      if (!r) return l;
      nodeptr m = findmin(r);
      m->rhs() = removeMin(r);
      m->lhs() = l;
      return balance(m);
    }
    return balance(p);
  }

 public:
  virtual void insert(T insert_data) override {
    this->last_inserted_node = nullptr;
    getRoot() = insert(getRoot(), insert_data);
  }
  virtual void remove(T remove_data) override {
    getRoot() = remove(getRoot(), remove_data);
  }
};
