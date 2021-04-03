#include <stdlib.h>
#include "nodeClass.h"


/* set */
void nodeClass::setValue(int newValue){
    value = newValue;
}

void nodeClass::setRightNode(nodeClass *node){
    rightNode = node;
}

void nodeClass::setLeftNode(nodeClass *node){
    leftNode = node;
}

/* get */
int nodeClass::getValue(){
    return value;
}

nodeClass *nodeClass::getLeftNode(){
    return leftNode;
}

nodeClass *nodeClass::getRightNode(){
    return rightNode;
}

nodeClass::nodeClass(int initialValue){
    nodeClass *rightNode = nullptr;
    nodeClass *leftNode = nullptr;
    value = initialValue;
}
