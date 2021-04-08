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
    nodeClass *getRoot();
    nodeClass *searchNode(int value, nodeClass *node);

    /* print */
    void inOrder(nodeClass *node);

    /* constructor */
    treeClass();
};


#endif