#include <stdlib.h>
#include "nodeClass.hpp"


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

/* cosntructor */
nodeClass::nodeClass(int initialValue){
    rightNode = nullptr;
    leftNode = nullptr;
    value = initialValue;
}
