/*
                    3_iteratorVector.cpp
        Example of iterators in vector in CPP.

        By: Dirghayu Joshi
        on: 12/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void vectorIteratorExample()
{
    vector<int> myVector{10, 20, 30, 40}; // Initialisation.

    // Vectors are indexed similar to an Array.
    cout << "They are the same: " << (myVector[0] == myVector.at(0)) << endl;

    // The below is an iterator.
    vector<int>::iterator it = myVector.begin(); // It will store the value of the address of 0 index of myVector.

    cout << "0 index: " << *it << endl; // Since it is a pointer, it needs to be dereferenced.

    it++;
    cout << "1 index: " << *it << endl;

    // end(), rend() and rbegin().
    vector<int>::iterator endIterator = myVector.end(); // If this is the value of myVector: {1, 2, 3, 4, 5}. end will store the address after the address of 5.
    /*
        vector<int>::iterator rbeginIterator = myVector.rbegin();
        vector<int>::iterator rendIterator = myVector.rend();
        The above initialisation didn't work.
    */
    vector<int>::reverse_iterator rbeginIterator = myVector.rbegin(); // Not used frequently. Will reverse the elements then point to the beginning one.
    vector<int>::reverse_iterator rendIterator = myVector.rend();     // Will reverse and then point at the address after the end element. In case of {1, 2, 3, 4, 5}, it will be the address before 1.

    cout << "To get the last element in a vector" << myVector.back() << endl;

    cout << "Printing all the elements using a for loop:" << endl;
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
    {
        cout << *(it) << endl;
    }
    cout << endl;

    // Shortcut using auto initialisation.
    cout << "Another way of using for loop to print elements: " << endl;
    for (auto it = myVector.begin(); it != myVector.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;

    // another way.
    cout << "Another way of iterating: " << endl;
    for (int it : myVector)
    {
        cout << it << endl;
    }
    cout << endl;
    /*
    In C++, the : operator is used in a range-based for loop to iterate over elements in a container or a sequence. It provides a more concise syntax for looping through the elements of a container without the need for explicit iterators.
    */

    cout << "Or this way using auto: " << endl;
    for (auto it : myVector)
    {
        cout << it << endl;
    }
    cout << endl;
}

int main()
{
    vectorIteratorExample();
    return 0;
}