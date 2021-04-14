#include "utils.hpp"
#include "fileReaderClass.hpp"
#include "nodeClass.hpp"
#include "treeClass.hpp"

#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    utils u;
    ifstream myfile;
    treeClass tree;
    fileReaderClass reader("../data/billboardData.csv"); // if running from project root, remove '../'

    auto songs = reader.getData();
    for (auto &song : songs) {
        cout << song.artist << endl;
    }

    return 0;
}
