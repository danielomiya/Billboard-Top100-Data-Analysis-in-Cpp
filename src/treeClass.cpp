#include <stdlib.h>
#include <iostream>
#include "nodeClass.hpp"
#include "treeClass.hpp"

/* set */
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

void treeClass::insert(int value){
    /* ERRO?? Quando insiro isso aqui no main o cout deixa de funcionar */
    nodeClass * node;
    node->setValue(value);
    insertNode(node);
}

/* get */
nodeClass * treeClass::getRoot(){
    return root;
}


/* print */
void treeClass::inOrder(nodeClass *node){
    /*
    if (node == nullptr){
        node = root;
    }

    if (node->getLeftNode() == nullptr && node->getRightNode() == nullptr){
        std::cout << node->getValue();
    }
    if (node->getLeftNode() != nullptr){
        inOrder(node->getLeftNode());
    }
    inOrder(node->getRightNode());
    */
}

