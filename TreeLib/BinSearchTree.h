#pragma once
#include "BinTree.h"

template<typename T>
class BinSearchTree {
  using nodeptr = BinTreeNode<T>*;

  nodeptr insert(nodeptr node, T insert_data) {
    if (!node) {
      last_inserted_node = new BinTreeNode<T>(insert_data);
      return last_inserted_node;
    }
    on_insert(node);
    if (insert_data < node->data)
      node->lhs() = insert(node->lhs(), insert_data);
    else if (insert_data > node->data)
      node->rhs() = insert(node->rhs(), insert_data);
    on_insert_place_found();
    return node;
  }

  nodeptr minValueNode(nodeptr node) {
    nodeptr current = node;

    while (current && current->lhs() != NULL)
        current = current->lhs();

    return current;
  }
  nodeptr deleteNode(nodeptr root, T key) {
    if (root == nullptr)
      return root;

    if (key < root->data)
      root->lhs() = deleteNode(root->lhs(), key);

    else if (key > root->data)
      root->rhs() = deleteNode(root->rhs(), key);

    else {
      if (root->lhs() == nullptr and root->rhs() == nullptr)
        return nullptr;
    
      else if (root->lhs() == nullptr) {
        nodeptr temp = root->rhs();
        free(root);
        return temp;
      } else if (root->rhs() == nullptr) {
        nodeptr temp = root->lhs();
        free(root);
        return temp;
      }

      nodeptr temp = minValueNode(root->rhs());

      root->data = temp->data;

      root->rhs() = deleteNode(root->rhs(), temp->data);
    } 
    return root;
  }

public:
  nodeptr root = nullptr;
  nodeptr last_inserted_node = nullptr;


  std::function<void(nodeptr node)> on_insert = [](nodeptr) {};
  std::function<void()> on_insert_place_found = []() {};

  nodeptr& getRoot() {
    return root;
  }

  nodeptr rrot(nodeptr node) {
    nodeptr tmp = node->lhs();
    node->lhs() = (tmp->rhs());
    tmp->rhs() = (node);
    return tmp;
  }
  nodeptr lrot(nodeptr node) {
    nodeptr tmp = node->rhs();
    node->rhs() = (tmp->lhs());
    tmp->lhs() = (node);
    return tmp;
  }
  virtual void insert(T insert_data) {
    last_inserted_node = nullptr;
    root = insert(root, insert_data);
  }
  virtual void remove(T val) {
    this->getRoot() = deleteNode(this->getRoot(), val);
  }
};