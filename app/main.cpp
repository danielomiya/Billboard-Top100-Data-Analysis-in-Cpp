#include "../src/treeClass.h"
#include "../src/nodeClass.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    treeClass *tree;
    nodeClass node(1);
    tree->insertNode(&node);
    cout << node.getValue();
    return 0;
}
