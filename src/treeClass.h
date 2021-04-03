#ifndef treeHeader
#define treeHeader
#include "nodeClass.h"

class treeClass{
    
private:
    nodeClass *root = nullptr;

public:
    /* set */
    void setRoot(nodeClass *Node);
    void insertNode(nodeClass *newNode, nodeClass *treeRoot = nullptr);


    /* get */
    nodeClass *getRoot();

    /* constructor */
    treeClass();
};


#endif