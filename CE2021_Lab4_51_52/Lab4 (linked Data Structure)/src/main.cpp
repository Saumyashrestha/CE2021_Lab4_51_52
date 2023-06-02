#include "linkedlistBST.h"
#include <iostream>
using namespace std;

int main() {
    LinkedListBST bst;

    cout << "Is BST empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;

    bst.addBST(50, 1);
    bst.addBST(30, 2);
    bst.addBST(70, 3);
    bst.addBST(20, 4);
    bst.addBST(40, 5);
    bst.addBST(60, 6);
    bst.addBST(80, 7);

    cout << "Is BST empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;

    cout << "Inorder traversal: ";
    bst.inorder();

    cout << "Search for key 60: " << (bst.searchBST(60) ? "Found" : "Not found") << endl;
    cout << "Search for key 90: " << (bst.searchBST(90) ? "Found" : "Not found") << endl;

    bst.removeBST(30);
    bst.removeBST(80);

    cout << "Inorder traversal after removing nodes: ";
    bst.inorder();

    return 0;
}
