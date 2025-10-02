#include "include/MyTreeNode.h"

MyTreeNode::MyTreeNode() : val(0), left(nullptr), right(nullptr) {}

MyTreeNode::MyTreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

MyTreeNode::MyTreeNode(int x, MyTreeNode* l, MyTreeNode* r)
    : val(x), left(l), right(r) {}
