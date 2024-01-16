#include <iostream>
#include "LinkedListStack.h"

int main() {
    LinkedListStack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element: " << stack.peek() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    return 0;
}
