#pragma once
#include "Tree.h"
#include <vector>

template<typename T>
class BinTreeNode : public TreeNode<T> {
public:
  void init() {
    this->branches.resize(2, nullptr);
  }
  BinTreeNode(T new_data) {
    init();
    this->data = new_data;
  }
  BinTreeNode() {
    init();
  }
  BinTreeNode<T>*& lhs() { return (BinTreeNode<T>*&)(this->branches[0]); }
  BinTreeNode<T>*& rhs() { return (BinTreeNode<T>*&)(this->branches[1]); }

  void pushLhs(T new_data) { this->pushData(0, new_data); }
  void pushRhs(T new_data) { this->pushData(1, new_data); }

  // stuff
  void reverse() {
    std::swap(this->branches[0], this->branches[1]);
    if (lhs()) lhs()->reverse();
    if (rhs()) rhs()->reverse();
  }
};