#ifndef STACK_NODE_H
#define STACK_NODE_H

template <typename T>
class StackNode {
public:
    T data;
    StackNode* next;

    StackNode(T val) : data(val), next(nullptr) {}
};

#endif 
