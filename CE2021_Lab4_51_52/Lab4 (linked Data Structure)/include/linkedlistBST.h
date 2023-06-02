#ifndef LinkedListBST_h
#define LinkedListBST_h

#include "AbstractBST.h"

struct Node {
    int key;
    int value;
    Node* left;
    Node* right;
};

class LinkedListBST : public AbstractBST {
private:
    Node* root;

public:
    LinkedListBST();
    bool isEmpty();
    void addBST(int key, int value);
    void removeBST(int keyToDelete);
    bool searchBST(int targetKey);
    void inorderTraversal(Node* node);
    void inorder();
};

#endif
