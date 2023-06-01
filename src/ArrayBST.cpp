#include "ArrayBST.h"
#include <iostream>
using namespace std;

ArrayBST::ArrayBST(int nodes)
{
    for (int i = 0; i < nodes; i++) 
    {
        array[i]=NULL;
    }
}

ArrayBST::ArrayBST()
{
    for(int i=0;i<MAX_SIZE;i++)
    {
        array[i]=NULL;
    }
}

bool ArrayBST::isEmpty()
{
    if(array[1]==NULL)
    return 1;
    else
    return 0;
}

void ArrayBST::addBST(int key)
{
    addBST(key,0);
}

void ArrayBST::addBST(int key,int value)
{
    ArrayNode* newNode = new ArrayNode(key,value);
    for(int i = 1;i<MAX_SIZE;)
    {
        ArrayNode* node = array[i];
        if(node==NULL)
        {
            array[i]=newNode;
            break;
        }
        else if(node->key<key)
        {
            i=2*i+1;
        }
        else
        {
            i=2*i;
        }
    }
}

void ArrayBST::removeBST(int keyTorem)
{
    if(!isEmpty())
    {
        if(!searchBST(keyTorem))
        cout<<"Given key doesn't exist."<<endl;
        else
        {
            int i;
            while(i<MAX_SIZE)
            {
                ArrayNode *node = array[i];
                if(node == NULL)
                break;
                else if(node->key==keyTorem)
                {
                    break;
                }
                else if(node->key<keyTorem)
                {
                    i=2*i+1;
                }
                else
                i=2*i;
            }
            if(array[2*i]==NULL && array[2*i+1]==NULL)
            {
                array[i]=NULL;
            }
            // for(int j=i;j<MAX_SIZE;)
            // {
            //     if(array[2*j]==)
            // }
        }
    }
}

bool ArrayBST::searchBST(int keyToFind)
{
    int i=1;
    bool find = false;
    while(i<MAX_SIZE)
    {
        ArrayNode *node = array[i];
        if(node == NULL)
        break;
        else if(node->key==keyToFind)
        {
            find = true;
            break;
        }
        else if(node->key<keyToFind)
        {
            i=2*i+1;
        }
        else
        i=2*i;
    }
    return find;
}




ArrayBST::~ArrayBST(){}


 