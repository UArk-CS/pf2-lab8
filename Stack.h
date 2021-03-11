//
// Created by Ben Worthington on 3/11/21.
//

#ifndef PF2_LAB8_STACK_H
#define PF2_LAB8_STACK_H

#include <iostream>
using namespace std;

// Stack data node definition
class SNode
{
public:
    int Number;
    SNode *Next;
};

class Stack
{
public:
    // constructor functions
    Stack();
    ~Stack();

    // general stack operations
    void Push(int Number);
    void Pop(int &Number);
    void Top(int &Number);
    bool IsFull();
    bool IsEmpty();
    void Print();

private:
    SNode *Head;
    int Length;
};

#endif //PF2_LAB8_STACK_H