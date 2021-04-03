#include <stdlib.h>
#include "nodeClass.h"
#include "treeClass.h"

void treeClass::setRoot(nodeClass *node){
    root = node;
}

void treeClass::insertNode(nodeClass *newNode, nodeClass *treeRoot){
    if (treeRoot == nullptr){
        treeRoot = root;
    }
    
    if (newNode->getValue() > treeRoot->getValue()){
        if (treeRoot->getRightNode() != nullptr){
            insertNode(newNode, treeRoot->getRightNode());
        }
        else{
            treeRoot->setRightNode(newNode);
        }  
    }
    if (newNode->getValue() < treeRoot->getValue()){
        if (treeRoot->getLeftNode() != nullptr){
            insertNode(newNode, treeRoot->getLeftNode());
        }
        else{
            treeRoot->setLeftNode(newNode);
        }
    }
}