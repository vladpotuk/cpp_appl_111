#include <stdexcept>  
#include "LinkedListStack.h"

template <typename T>
LinkedListStack<T>::LinkedListStack() : top(nullptr) {}

template <typename T>
LinkedListStack<T>::~LinkedListStack() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
void LinkedListStack<T>::push(T val) {
    StackNode<T>* newNode = new StackNode<T>(val);
    newNode->next = top;
    top = newNode;
}

template <typename T>
T LinkedListStack<T>::pop() {
    if (isEmpty()) {
       
        throw std::runtime_error("Stack is empty");
    }

    T poppedValue = top->data;
    StackNode<T>* temp = top;
    top = top->next;
    delete temp;

    return poppedValue;
}

template <typename T>
T LinkedListStack<T>::peek() {
    if (isEmpty()) {
      
        throw std::runtime_error("Stack is empty");
    }

    return top->data;
}

template <typename T>
bool LinkedListStack<T>::isEmpty() {
    return top == nullptr;
}


template class LinkedListStack<int>;
