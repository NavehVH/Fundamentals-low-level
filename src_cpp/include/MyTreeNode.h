#ifndef MYTREENODE_H
#define MYTREENODE_H

class MyTreeNode {
private:
    int val;
    MyTreeNode* left;
    MyTreeNode* right;
    
public:

    MyTreeNode();
    MyTreeNode(int x);
    MyTreeNode(int x, MyTreeNode* l, MyTreeNode* r);
};

#endif // MYTREENODE_H