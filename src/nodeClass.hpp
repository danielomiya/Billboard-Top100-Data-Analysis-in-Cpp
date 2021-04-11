#include <fstream>
#ifndef nodeHeader
#define nodeHeader

class nodeClass
{
private:
    int value;
    int rank;
    int last_week;
    int peak_rank;
    int weeks_on_board;
    std::string date;
    std::string song;
    std::string artist;
    nodeClass *rightNode;
    nodeClass *leftNode;

public:
    /* set */
    void setValue(int newValue);
    void setLeftNode(nodeClass *Node);
    void setRightNode(nodeClass *Node);

    /* get */
    int getValue();
    int getRank();
    int getLW();
    int getPR();
    int getWB();
    
    std::string getDate();
    std::string getSong();
    std::string getArtist();
    
    nodeClass *getLeftNode();
    nodeClass *getRightNode();

    /* cosntructor */
    nodeClass(int initialValue, std::string date, int rank, std::string song, std::string artist, int last_week, int peak_rank, int weeks_on_board);
};
#endif