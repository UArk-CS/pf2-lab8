#include <iostream>
#include "Stack.h"

int main() {

    Stack stack;
    int number;

    stack.Push(3);
    stack.Push(1);
    stack.Push(4);
    stack.Push(1);
    stack.Push(5);
    stack.Push(9);

    stack.Print();
    cout << endl;

    stack.Pop(number);
    stack.Pop(number);
    stack.Pop(number);
    stack.Print();
    cout << endl;
    stack.Pop(number);
    stack.Pop(number);
    stack.Top(number);
    stack.Pop(number);

    return 0;

}
