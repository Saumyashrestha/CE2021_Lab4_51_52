#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST {
public:
    virtual bool isEmpty() = 0;
    virtual void addBST(int key, int value) = 0;
    virtual void removeBST(int keyToDelete) = 0;
    virtual bool searchBST(int targetKey) = 0;
};

#endif
