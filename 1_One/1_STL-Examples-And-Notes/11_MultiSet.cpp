/*
                        11_MultiSet.cpp
                    About multiset STL in CPP.

                    By: Dirghayu Joshi
                    On: 13/June/2023
*/

/*
A multiset in STL is an associative container just like a set the only difference is it can store duplicate elements in it.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainMultiset()
{
    // multiset<object_type> variable_name; <-Syntax.
    multiset<int> intMultiset;
    multiset<string> stringMultiset;

    /*
    These are the methods used in a multiset:
    1. insert() – to insert an element in the multiset.
    2. begin() – return an iterator pointing to the first element in the multiset.
    3. end() – returns an iterator to the theoretical element after the last element.
    4. count() – gives the count of a particular element in the multiset.
    5. clear() – deletes all the elements in the multiset.
    6. find() – to search an element in the multiset.
    7. erase() – to delete a single element or elements between a particular range.
    8. size() – returns the size of the multiset.
    9. empty() – to check if the multiset is empty or not.
    */

    multiset<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    s.insert(5);
    cout << "Elements present in the multiset: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in multiset" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the multiset is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The multiset is not empty " << endl;
    else
        cout << "The multiset is empty" << endl;
    s.clear();
    cout << "Size of the multiset after clearing all the elements: " << s.size();
}

int main()
{
    explainMultiset();
    return 0;
}