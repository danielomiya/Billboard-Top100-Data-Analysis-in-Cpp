#ifndef nodeHeader
#define nodeHeader

class nodeClass
{
private:
    int value;
    nodeClass *rightNode;
    nodeClass *leftNode;
public:
    /* set */
    void setValue(int newValue);
    void setLeftNode(nodeClass *Node);
    void setRightNode(nodeClass *Node);

    /* get */
    int getValue();

    /* cosntructor */
    nodeClass(int initialValue);
};
#endif