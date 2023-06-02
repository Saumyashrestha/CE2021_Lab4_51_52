#include "ArrayBST.h"
#include <iostream>
using namespace std;

int main(){
    ArrayBST *s;
    cout<<"Checking if the BST is Empty or not before adding"<<"\t";
    cout<<s->isEmpty()<<endl;
    s->addBST(6,6);
    s->addBST(5,5);
    s->addBST(3,3);
    s->addBST(4,4);
    s->addBST(7,7);
    s->addBST(9,9);
    s->addBST(8,8);
    cout<<"Checking the BST is Empty or not after adding"<<"\t";
    cout<<s->isEmpty()<<endl;
    cout<<"Searching 4 in BST:"<<"\t";
    cout<<s->searchBST(4)<<endl;
    s->removeBST(5);
}





