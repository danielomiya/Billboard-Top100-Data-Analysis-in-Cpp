#ifndef treeHeader
#define treeHeader
#include "nodeClass.hpp"

class treeClass{
    
private:
    nodeClass *root = nullptr;

public:
    /* set */
    void setRoot(nodeClass *Node);
    void insertNode(nodeClass *newNode, nodeClass *treeRoot = nullptr);
    void insert(int value);


    /* get */
    nodeClass *getRoot();

    /* print */
    void inOrder(nodeClass *node = nullptr);

    /* constructor */
    treeClass();

};


#endif