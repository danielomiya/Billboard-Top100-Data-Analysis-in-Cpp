#include "nodeClass.hpp"
#include "treeClass.hpp"
#include <iostream>
#include "fileReaderClass.hpp"

using namespace std;

int main(int argc, char *argv[]) {
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
