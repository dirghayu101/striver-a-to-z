/*
                        8_queue.cpp
                About queue STL in CPP.

                By: Dirghayu Joshi
                On: 13/June/2023
*/
/*
A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear. The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }
}

void explainQueue()
{
    // queue<object_type> variable_name; <- Syntax.
    queue<int> intQueue;
    queue<string> stringQueue;

    /*
    Methods in queue:
    1. push() – to insert an element in the queue.
    2. pop() – deletes the first element of the queue.
    3. front() – returns a reference to the first element of the queue.
    4. back() – returns a reference to the last element of the queue.
    5. emplace() – to insert an element in the queue.
    6. size() – returns the number of elements on the queue.
    7. empty() – to check if the queue is empty or not.
    */

    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i);

    cout << "The elements of the queue are:" << endl;
    printQueue(q);

    cout << "The size of the queue: " << q.size() << endl;
    cout << "The front element of the queue: " << q.front() << endl;
    cout << "The last element of the queue: " << q.back() << endl;
    cout << "Pop the front element: " << endl;
    q.pop();
    printQueue(q);
}

int main()
{
    explainQueue();
    return 0;
}