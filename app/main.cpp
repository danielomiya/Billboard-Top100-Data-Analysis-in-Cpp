#include "../src/nodeClass.hpp"
#include "../src/treeClass.hpp"
#include "../src/utils.hpp"

#include <iostream>
#include <stdlib.h>
#include <fstream>


using namespace std;

int main(){

    utils u;
    ifstream myfile;
    treeClass tree;

    myfile.open("../data/billboardData.csv");

    std::vector<std::vector<std::string>> table;
    table = u.readCSV(myfile);

    std::vector<std::string> header = table[0];

    nodeClass root(1, table[1][0], stoi(table[1][1]), table[1][2], table[1][3], stoi(table[1][4]), stoi(table[1][5]), stoi(table[1][6]));
    tree.setRoot(&root);

    for (int i = 2; i <= 10; i++){
        tree.insertNode((i * 1283)%17, table[i][0], stoi(table[i][1]), table[i][2], table[i][3], stoi(table[i][4]), stoi(table[i][5]), stoi(table[i][6]), tree.getRoot());
    }

    cout << "oi\n";
    tree.inOrder(tree.getRoot());
    tree.outputTree(tree.getRoot());
    tree.outputClose();

    return 0;
}
