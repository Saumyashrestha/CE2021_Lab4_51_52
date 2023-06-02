#include "AbstractBST.h"
#define MAX_SIZE 128

class ArrayNode
{
    public:
    int key;
    int value;
    ArrayNode(){}
    ArrayNode(int key,int value):key(key),value(value){}
};

class ArrayBST:public AbstractBST
{
    public:
    ArrayBST();
    ArrayBST(int);
    ~ArrayBST();
    bool isEmpty();
    void addBST(int,int);
    void addBST(int);
    void removeBST(int);
    bool searchBST(int);
    private:
    ArrayNode* array[MAX_SIZE];
};
