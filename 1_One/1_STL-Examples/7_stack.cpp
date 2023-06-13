/*
                     7_stack.cpp
    Details about stack in Standard Template Library in CPP.


    By: Dirghayu Joshi
    on: 13/June/2023


    -> A stack is a non-primitive linear data structure. it is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS).

    -> The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. That is the reason why stack is also called Last-in-First-out (LIFO).
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printStack(stack<int> s) // pass by value not by reference.
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}

void explainStack()
{
    // stack<object_type> variable_name; <-- Syntax
    stack<int> intStack;
    stack<string> stringStack;

    // Methods of stack.
    // 1. push() – to insert an element in the stack.
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    cout << "Printing stack: " << endl;
    printStack(intStack);

    // 2. pop() - to delete the top element of the stack.
    intStack.pop();
    cout << "Printing the stack after popping an element: " << endl;
    printStack(intStack);

    // 3. top() - to get the top element of the stack.
    cout << "The top element of the stack is " << intStack.top() << "." << endl;

    // 4. emplace() - to insert an element into the stack.
    cout << "The stack now is: " << endl;
    printStack(intStack);
    cout << "Inserting 4 using emplace." << endl;
    intStack.emplace(4);
    cout << "The stack after insertion of 4 will be now: " << endl;
    printStack(intStack);

    // 5. size() - to get the size of the stack.
    cout << "The size of the stack is " << intStack.size() << "." << endl;

    // 6. empty() - to check if the stack is empty.
}

int main()
{
    explainStack();
    return 0;
}