#include "linkedlistBST.h"
#include <iostream>
using namespace std;

LinkedListBST::LinkedListBST() {
    root = nullptr;
}

bool LinkedListBST::isEmpty() {
    return root == nullptr;
}

void LinkedListBST::addBST(int key, int value) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (isEmpty()) {
        root = newNode;
        return;
    }

    Node* currentNode = root;
    Node* parent = nullptr;

    while (currentNode != nullptr) {
        parent = currentNode;
        if (key < currentNode->key)
            currentNode = currentNode->left;
        else
            currentNode = currentNode->right;
    }

    if (key < parent->key)
        parent->left = newNode;
    else
        parent->right = newNode;
}

void LinkedListBST::removeBST(int keyToDelete) {
    Node* currentNode = root;
    Node* parent = nullptr;

    while (currentNode != nullptr && currentNode->key != keyToDelete) {
        parent = currentNode;
        if (keyToDelete < currentNode->key)
            currentNode = currentNode->left;
        else
            currentNode = currentNode->right;
    }

    if (currentNode == nullptr)
        return; // Key not found in the BST

    // Case 1: Node to delete has no children
    if (currentNode->left == nullptr && currentNode->right == nullptr) {
        if (currentNode == root) {
            root = nullptr;
        } else if (currentNode == parent->left) {
            parent->left = nullptr;
        } else {
            parent->right = nullptr;
        }

        delete currentNode;
    }
    // Case 2: Node to delete has only one child
    else if (currentNode->left == nullptr || currentNode->right == nullptr) {
        Node* child;
        if (currentNode->left != nullptr)
            child = currentNode->left;
        else
            child = currentNode->right;

        if (currentNode == root) {
            root = child;
        } else if (currentNode == parent->left) {
            parent->left = child;
        } else {
            parent->right = child;
        }

        delete currentNode;
    }
    // Case 3: Node to delete has two children
    else {
        Node* successor = currentNode->right;
        Node* successorParent = currentNode;

        while (successor->left != nullptr) {
            successorParent = successor;
            successor = successor->left;
        }

        currentNode->key = successor->key;
        currentNode->value = successor->value;

        if (successorParent->left == successor)
            successorParent->left = successor->right;
        else
            successorParent->right = successor->right;

        delete successor;
    }
}

bool LinkedListBST::searchBST(int targetKey) {
    Node* currentNode = root;

    while (currentNode != nullptr) {
        if (targetKey == currentNode->key)
            return true;
        else if (targetKey < currentNode->key)
            currentNode = currentNode->left;
        else
            currentNode = currentNode->right;
    }

    return false;
}

void LinkedListBST::inorderTraversal(Node* node) {
    if (node == nullptr)
        return;

    inorderTraversal(node->left);
    cout << node->key << " ";
    inorderTraversal(node->right);
}

void LinkedListBST::inorder() {
    inorderTraversal(root);
    cout << endl;
}
