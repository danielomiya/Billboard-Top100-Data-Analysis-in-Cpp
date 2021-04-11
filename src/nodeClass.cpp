#include <stdlib.h>
#include <fstream>

#include "nodeClass.hpp"

using namespace std;

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

std::string nodeClass::getDate(){
    return date;
}
int nodeClass::getRank(){
    return rank;
}
std::string nodeClass::getSong(){
    return song;
}
std::string nodeClass::getArtist(){
    return artist;
}
int nodeClass::getLW(){
    return last_week;
}
int nodeClass::getPR(){
    return peak_rank;
}
int nodeClass::getWB(){
    return weeks_on_board;
}

/* cosntructor */
nodeClass::nodeClass(int initialValue, string n_date, int n_rank, string n_song, string n_artist, int n_last_week, int n_peak_rank, int n_weeks_on_board){
    rightNode = nullptr;
    leftNode = nullptr;
    value = initialValue;
    date = n_date;
    rank = n_rank;
    song = n_song;
    artist = n_artist;
    last_week = n_last_week;
    peak_rank = n_peak_rank;
    weeks_on_board = n_weeks_on_board;
}
