#ifndef treeHeader
#define treeHeader
#include "nodeClass.h"

class treeClass{
    
private:
    nodeClass *root;

public:
    /* set */
    void setRoot(nodeClass *Node);

    /* get */
    nodeClass *getRoot();

    /* constructor */
    treeClass(nodeClass *initialNode);
};


#endif