/*
                        10_set.cpp
            Covers about set STL in CPP.

            By: Dirghayu Joshi
            On: 13/June/2023
*/

/*
A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainSet()
{
    // set<object_type> variable_name;  <- Syntax
    set<int> setInt;
    set<string> setString;

    /*
    Methods in set:
    1. insert() – to insert an element in the set.
    2. begin() – return an iterator pointing to the first element in the set.
    3. end() – returns an iterator to the theoretical element after the last element.
    4. count() – returns true or false based on whether the element is present in the set or not.
    5. clear() – deletes all the elements in the set.
    6. find() – to search an element in the set.
    7. erase() – to delete a single element or elements between a particular range.
    8. size() – returns the size of the set.
    9. empty() – to check if the set is empty or not.
    */

    set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}

int main()
{
    explainSet();
    return 0;
}