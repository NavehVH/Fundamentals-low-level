#ifndef MYQUQUE_H
#define MYSTACK_H

class MyQueue {
private:
    struct Node
    {
        int val;
        Node* next;
        Node(int v) : val(v), next(nullptr) {}
    };

    Node* front;
    Node* rear;
    int size;

public:
    MyQueue();
    ~MyQueue();

    void push(int x); //add a new element to the back of the queue
    void pop(); //remove the first element in the front
    int peek() const; //check the first element
    bool empty() const; //return true if empty
    int length() const; //length of queue
    void printQueue() const;
};

#endif