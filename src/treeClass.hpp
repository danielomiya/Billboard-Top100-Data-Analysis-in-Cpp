#ifndef treeHeader
#define treeHeader
#include "nodeClass.hpp"

class treeClass{
    
private:
    nodeClass *root;

public:
    /* set */
    void setRoot(nodeClass Node);
    void insert(int value);
    void insertNode(int value, nodeClass *treeRoot);
    

    /* get */
    int isRootNULL();
    nodeClass *getRoot();
    

    /* print */
    void inOrder(nodeClass *node);

    /* constructor */
    treeClass();
};


#endif