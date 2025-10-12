#include "include/MyQueue.h"
#include <stdexcept>
#include <iostream>

MyQueue::MyQueue() : front(nullptr), rear(nullptr), size(0) {}

MyQueue::~MyQueue() {
    while (!empty()) pop();
}

void MyQueue::push(int x) {
    Node* newNode = new Node(x);
    if (rear)
        rear->next = newNode;
    else
        front = newNode;
    rear = newNode;
    size++;
}

void MyQueue::pop() {
    if (empty()) return;
    Node* temp = front;
    front = front->next;
    delete temp;
    size--;
    if (!front) rear = nullptr;
}

int MyQueue::peek() const {
    if (empty()) throw std::runtime_error("Queue is empty");
    return front->val;
}

bool MyQueue::empty() const {
    return size == 0;
}

int MyQueue::length() const {
    return size;
}

void MyQueue::printQueue() const {
    Node* curr = front;
    while (curr) {
        std::cout << curr->val << " <- ";
        curr = curr->next;
    }
    std::cout << "NULL" << std::endl;
}


