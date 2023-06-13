/*
                        9_priorityQueue.cpp
            Covers priority queue STL used in CPP.

            By: Dirghayu Joshi
            On: 13/June/2023
*/

/*
Heap is a special case of balanced binary tree data structure where the root-node key is compared with its children and arranged accordingly.

Min-Heap − Where the value of the root node is less than or equal to either of its children.

Max-Heap − Where the value of the root node is greater than or equal to either of its children.

Refer this: https://www.tutorialspoint.com/data_structures_algorithms/heap_data_structure.htm

In the case of the max heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains and the rest elements are in decreasing order.

In the case of the min heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the smallest of the elements it contains and the rest elements are in increasing order.

NOTE: In C++ STL by default max-heap is created.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printPriorityQueue(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << "\n";
        pq.pop();
    }
}

void explainPriorityQueue()
{
    // NOTE: priority_queue<object_type> variable_name; <- For max heap.
    priority_queue<int> maxHeapPriorityQueue; // max type.

    // NOTE: priority_queue<object_type,vector<object_type>,greater<object_type>> variable_name; <- For min heap.
    priority_queue<int, vector<int>, greater<int>> minHeapPriorityQueue; // min type.

    /*
    Methods in priority queue:
    1. push() – to insert an element in the priority queue.
    2. pop() – deletes the top element of the priority queue.
    3. top() – returns the element at the top of the priority queue.
    4. emplace() – to insert an element in the priority.
    5. size() – returns the number of elements in the priority queue.
    6. empty() – to check if the priority queue is empty or not.
    */

    priority_queue<int> pq;
    for (int i = 1; i <= 5; i++)
        pq.push(i);

    cout << "The elements of the priority queue are:" << endl;
    printPriorityQueue(pq);

    cout << "The size of the priority queue: " << pq.size() << endl;
    cout << "The top element of the priority queue: " << pq.top() << endl;
    cout << "Pop the top element: " << endl;
    pq.pop();
    printPriorityQueue(pq);
}

int main()
{
    explainPriorityQueue();
    return 0;
}