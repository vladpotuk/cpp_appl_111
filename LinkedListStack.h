#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H
#include "StackNode.h"

template <typename T>
class LinkedListStack {
private:
    StackNode<T>* top;

public:
    LinkedListStack();
    ~LinkedListStack();

    void push(T val);
    T pop();
    T peek();
    bool isEmpty();
};

#endif 

