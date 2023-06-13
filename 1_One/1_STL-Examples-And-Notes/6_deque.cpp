/*
                    6_deque.cpp
    Double Ended Queue which is also called Deque is a type of queue data structure in which the insertion and deletion of elements can be either in front or rear.

    By: Dirghayu Joshi
    on: 12/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printDeque(deque<int> dq)
{
    cout << endl
         << "The values are: " << endl;
    for (auto it : dq)
    {
        cout << it << endl;
    }
    cout << endl;
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(10);  //{10}
    dq.push_back(20);  //{10, 20}
    dq.push_front(30); //{30, 10, 20}
    dq.push_front(40); //{40, 30, 10, 20}
    dq.push_front(50); //{50, 40, 30, 10, 20}
    printDeque(dq);
    cout << "The size of the deque is: " << dq.size() << endl;
    cout << "The first element in the deque: " << dq.front() << endl;
    cout << "Deleting the first element" << endl;
    dq.pop_front();
    printDeque(dq);
    cout << "The last element of the deque: " << dq.back() << endl;
    cout << "Deleting the last element" << endl;
    dq.pop_back();
    printDeque(dq);
}

int main()
{
    explainDeque();
    return 0;
}