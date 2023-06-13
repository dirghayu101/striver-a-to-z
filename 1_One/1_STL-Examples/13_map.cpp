/*
                        13_map.cpp
        Explanation of map STL library in CPP.

        By: Dirghayu Joshi
        on: 13/June/2023

    Map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainMap()
{
    // map<object_type,object_type> variable_name; <-- Syntax
    map<int, int> mp1;
    map<string, int> mp2;
    mp1.insert({1, 10});
    mp1.insert({2, 20});
    mp2.insert({"First", 1});
    mp2.insert({"Second", 2});

    // Method 1: begin() ->  return an iterator pointing to the first element in the map.
    // Method 2: end() -> return an iterator pointing to the theoretical element after the last element.
    // Method 3: clear() -> deletes all the elements in the map.
    // Method 4: find() -> to find a single element in the map.
    // Method 5: erase() -> to delete a single element or elements between a particular range.
    // Method 6: size() -> Returns the number of elements in the map.
    // Method 7: empty() -> to check if the map is empty or not.

    map<int, int> mp;
    for (int i = 1; i <= 5; i++)
    {
        mp.insert({i, i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
    mp.clear();
    cout << "Size of the map after clearing all the elements: " << mp.size();
}

int main()
{
    explainMap();
    return 0;
}
