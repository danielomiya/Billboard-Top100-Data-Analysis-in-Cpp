#include <stdlib.h>
#include <iostream>
#include "nodeClass.hpp"
#include "treeClass.hpp"

/* cosntructor */
treeClass::treeClass(){
    root = NULL;
}

/* set */
void treeClass::insertNode(int value, nodeClass * treeRoot){
    if (value < treeRoot->getValue()){
        if (treeRoot->getLeftNode() == NULL){
            treeRoot->setLeftNode(new nodeClass(value));
        }
        else{
            insertNode(value, treeRoot->getLeftNode());
        }
    }
    else if (value > treeRoot->getValue()){
        if (treeRoot->getRightNode() == NULL){
            treeRoot->setRightNode(new nodeClass(value));
        }
        else{
            insertNode(value, treeRoot->getRightNode());
        }
    }     
     
}

void treeClass::insert(int value){
    if (root == NULL){
        root = new nodeClass(value);
    }
    else{
        insertNode(value, root);
    }
}


/* get */
nodeClass *treeClass::getRoot(){
    return root;
}


/* print */
void treeClass::inOrder(nodeClass * node){
    if (node != NULL){
        inOrder(node->getLeftNode());
        std::cout << node->getValue() << "\t";
        inOrder(node->getRightNode());
    }
}

