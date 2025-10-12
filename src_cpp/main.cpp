#include <iostream>
#include "include/MyQueue.h"

int main() {
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    q.printQueue();   // 10 <- 20 <- 30 <- NULL

    std::cout << "Front: " << q.peek() << std::endl; // 10

    q.pop();
    q.printQueue();   // 20 <- 30 <- NULL

    std::cout << "Size: " << q.length() << std::endl;

    return 0;
}
