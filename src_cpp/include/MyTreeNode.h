#ifndef MYTREENODE_H
#define MYTREENODE_H

class MyTreeNode {
public:
    int val;
    MyTreeNode* left;
    MyTreeNode* right;

    MyTreeNode();
    MyTreeNode(int x);
    MyTreeNode(int x, MyTreeNode* l, MyTreeNode* r);
};

#endif // MYTREENODE_H