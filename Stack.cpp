//
// Created by Ben Worthington on 3/11/21.
//

#include "Stack.h"

//-----------------------------------------------------------
// Constructor function.
//-----------------------------------------------------------
Stack::Stack()
{
    Head = NULL;
    Length = 0;
}

//-----------------------------------------------------------
// Destructor function.
//-----------------------------------------------------------
Stack::~Stack()
{
}

//-----------------------------------------------------------
// This checks to see if stack is full.
//-----------------------------------------------------------
bool Stack::IsFull()
{
    return (false);
}

//-----------------------------------------------------------
// This checks to see if stack is empty.
//-----------------------------------------------------------
bool Stack::IsEmpty()
{
    return (Length == 0);
}

//-----------------------------------------------------------
// This routine pushes data into the stack.
//-----------------------------------------------------------
void Stack::Push(int Number)
{
    // Check for full stack
    if (IsFull())
        return;

    // Allocate space for data
    SNode *Temp = new SNode;
    if (Temp == NULL)
        return;

    // Insert data at head of list
    Temp->Number = Number;
    Temp->Next = Head;
    Head = Temp;
    Length++;
}

//-----------------------------------------------------------
// This routine pops data from the stack.
//-----------------------------------------------------------
void Stack::Pop(int &Number)
{
    // Check for empty stack
    if (IsEmpty())
        return;

    // Extract information from node
    Number = Head->Number;

    // Pop item from linked list
    SNode *Temp = Head;
    Head = Head->Next;
    delete Temp;
    Length--;
}

//-----------------------------------------------------------
// This routine returns the data from the front of the stack.
//-----------------------------------------------------------
void Stack::Top(int &Number)
{
    // ADD HERE
}

//-----------------------------------------------------------
// This routine prints all records in the stack.
//-----------------------------------------------------------
void Stack::Print()
{
    // ADD HERE
}