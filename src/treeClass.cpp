#include <stdlib.h>
#include <iostream>
#include <fstream>

#include "nodeClass.hpp"
#include "treeClass.hpp"

/* cosntructor */
treeClass::treeClass(){
    root = NULL;
}

/* set */
void treeClass::setRoot(nodeClass * Node){
    root = Node;
}

void treeClass::insertNode(int value, std::string n_date, int n_rank, std::string n_song, std::string n_artist, int n_last_week, int n_peak_rank, int n_weeks_on_board, nodeClass * treeRoot){
    if (treeRoot == NULL){
        treeRoot = new nodeClass(value, n_date, n_rank, n_song, n_artist, n_last_week, n_peak_rank, n_weeks_on_board);
    }
    if (value < treeRoot->getValue()){
        if (treeRoot->getLeftNode() == NULL){
            treeRoot->setLeftNode(new nodeClass(value, n_date, n_rank, n_song, n_artist, n_last_week, n_peak_rank, n_weeks_on_board));
        }
        else{
            insertNode(value, n_date, n_rank, n_song, n_artist, n_last_week, n_peak_rank, n_weeks_on_board, treeRoot->getLeftNode());
        }
    }
    else if (value > treeRoot->getValue()){
        if (treeRoot->getRightNode() == NULL){
            treeRoot->setRightNode(new nodeClass(value, n_date, n_rank, n_song, n_artist, n_last_week, n_peak_rank, n_weeks_on_board));
        }
        else{
            insertNode(value, n_date, n_rank, n_song, n_artist, n_last_week, n_peak_rank, n_weeks_on_board, treeRoot->getRightNode());
        }
    }     
     
}


/* get */
nodeClass *treeClass::getRoot(){
    return root;
}

nodeClass *treeClass::searchNode(int value, nodeClass *node){
    if (value == node->getValue()){
        return node;
    }
    else{
        if ((value > node->getValue())){
            if (node->getRightNode() != NULL){
                return searchNode(value, node->getRightNode());
            }
            else{
                return NULL;
            }
        }
        if (node->getLeftNode() != NULL){
            return searchNode(value, node->getLeftNode());
        }
        else{
            return NULL;
        }
    }
    return NULL;
}

/* output */
void treeClass::inOrder(nodeClass * node){
    if (node != NULL){
        inOrder(node->getLeftNode());
        std::cout << node->getValue() << "\t";
        inOrder(node->getRightNode());
    }
}

void treeClass::outputTree(nodeClass *node, nodeClass *cb, int root){
    if (root == 1){
        std::ofstream output;
        output.open("../data/output/tree.json", std::ofstream::trunc);
        output << "{\n";
    }
    if (node != NULL){        
        std::ofstream output;
        output.open("../data/output/tree.json", std::ofstream::app);

        if (root == 1){
            output << "\t\"" << node->getValue() << "\":" << "{\n";
        }
        else{
            output << ",\n\t" << "\"" << node->getValue() << "\":" << "{\n";
        }

        output << "\n\t\t\"date\":" << "\"" << node->getDate() << "\",";
        output << "\n\t\t\"rank\":" << "\"" << node->getRank() << "\",";
        output << "\n\t\t\"song\":" << "\"" << node->getSong() << "\",";
        output << "\n\t\t\"artist\":" << "\"" << node->getArtist() << "\",";
        output << "\n\t\t\"last_weak\":" << "\"" << node->getLW() << "\",";
        output << "\n\t\t\"peak_rank\":" << "\"" << node->getPR() << "\",";
        output << "\n\t\t\"weaks_on_board\":" << "\"" << node->getWB() << "\",";

        if (root == 1){
            output << "\n\t\t\"root\":\"True\",";
            output << "\n\t\t\"father\":null,";
            output << "\n\t\t\"orientation_n\":null";
        }
        else{
            output << "\n\t\t\"root\":\"False\",";
            output << "\n\t\t\"father\":" << "\"" << cb->getValue() << "\",";
            if (cb->getRightNode() == node){
                output << "\n\t\t\"orientation_n\":\"right\"";
            }
            else{
                output << "\n\t\t\"orientation_n\":\"left\"";
            }
        }
        output << "\n\t}";
        output.close();
        outputTree(node->getLeftNode(), node, 0);
        outputTree(node->getRightNode(), node, 0);
    }
}

void treeClass::outputClose(){
    std::ofstream output;
    output.open("../data/output/tree.json", std::ofstream::app);
    output << "\n}";
}