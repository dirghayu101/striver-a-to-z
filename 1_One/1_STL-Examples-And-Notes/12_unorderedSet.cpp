/*
                12_unorderedSet.cpp
        Explanation of unordered set STL in CPP.

        By: Dirghayu Joshi
        On: 13/June/2023
*/

/*
An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainUnorderedSet()
{
    // unordered_set<object_type> variable_name; <- Syntax.
    unordered_set<int> numSetUnordered;
    unordered_set<string> stringSetUnordered;
    /*
    Methods in unordered set:
    1. insert() – to insert an element in the unordered set.
    2. begin() – return an iterator pointing to the first element in the unordered set.
    3. end() – returns an iterator to the theoretical element after the last element.
    4. count() – it returns 1 if the element is present in the container otherwise 0.
    5. clear() – deletes all the elements in unordered set.
    6. find() – to search an element in the unordered set.
    7. erase() – to delete a single element or elements between a particular range.
    8. size() – returns the size of the unordered set.
    9. empty() – to check if the unordered set is empty or not.
    */

    unordered_set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unordered set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the unordered set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}

int main()
{
    explainUnorderedSet();
    return 0;
}