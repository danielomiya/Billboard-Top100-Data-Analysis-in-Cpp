#include "nodeClass.hpp"
#include "treeClass.hpp"

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    treeClass tree;

    tree.insert(50);
    tree.insert(40);
    tree.insert(60);
    tree.insert(30);
    cout << tree.searchNode(60, tree.getRoot())->getValue();

    return 0;
}
