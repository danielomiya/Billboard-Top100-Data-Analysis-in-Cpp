#ifndef treeHeader
#define treeHeader
#include "nodeClass.hpp"

class treeClass{
    
private:
    nodeClass *root;

public:
    /* set */
    void setRoot(nodeClass * Node);
    void insertNode(int value, std::string n_date, int n_rank, std::string n_song, std::string n_artist, int n_last_week, int n_peak_rank, int n_weeks_on_board, nodeClass * treeRoot);
    

    /* get */
    nodeClass *getRoot();
    nodeClass *searchNode(int value, nodeClass *node);

    /* output */
    void inOrder(nodeClass *node);
    void outputTree(nodeClass *node, nodeClass *cb = nullptr, int root = 1);
    void outputClose();

    /* constructor */
    treeClass();
};


#endif