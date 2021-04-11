#include "nodeClass.hpp"
#include "treeClass.hpp"
#include "fileReaderClass.hpp"
#include "../src/utils.hpp"

int main(int argc, char *argv[]) {

#include <iostream>
#include <stdlib.h>
#include <fstream>


using namespace std;

int main(){

    utils u;
    ifstream myfile;
    treeClass tree;
    fileReaderClass reader("data/billboardData.csv");

    tree.insert(50);
    tree.insert(40);
    tree.insert(60);
    tree.insert(30);
    cout << tree.searchNode(60, tree.getRoot())->getValue() << endl;

    auto songs = reader.getData();
    for (auto &song : songs) {
        cout << song.artist << endl;
    }

    return 0;
}
