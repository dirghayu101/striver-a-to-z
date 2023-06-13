/*
                    4_vectorIteratorOther.cpp
        Other small functionalities of vectors in CPP.

        By: Dirghayu Joshi
        On: 12/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printVector(vector<int> v)
{
    for (auto it : v)
        cout << it << endl;
    cout << endl;
}

void vectorUseExample()
{
    vector<int> myVector{10, 20, 30, 40, 50};

    cout << "Current vector values: " << endl;
    printVector(myVector);

    // Erase method. Can take a single parameter if you want to delete a single value, or two parameters in which case it will delete from the start value to the end value.
    myVector.erase(myVector.begin() + 1); // Should delete 20.
    cout << "Value after erase is: " << endl;
    printVector(myVector);

    myVector.emplace_back(60);
    myVector.emplace_back(70);
    cout << "Current values before erase is: " << endl;
    printVector(myVector);

    // This erase has a range of values to erase.
    myVector.erase(myVector.begin() + 1, myVector.begin() + 3);
    cout << "Values after erase are: " << endl;
    printVector(myVector);

    // Insert function.
    vector<int> v(2, 100);          //{100, 100}
    v.insert(v.begin(), 300);       //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 50); //{300, 50, 50, 100, 100}

    vector<int> copy(2, 50);                       //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 50, 50, 100, 100}

    v.pop_back(); // {50, 50, 300, 50, 50, 100} <-- Last element removed.

    cout << endl
         << "The size of vector v is: " << v.size() << endl;

    vector<int> newVector{1, 2, 3};
    cout << "Before swapping --> \n\n";
    cout << "The value of v is: " << endl;
    printVector(v);
    cout << "The value of newVector is: " << endl;
    printVector(newVector);
    cout << endl
         << endl;
    v.swap(newVector); // v will become {1, 2, 3}
    cout << "After swapping --> \n\n";
    cout << "The value of v is: " << endl;
    printVector(v);
    cout << "The value of newVector is: " << endl;
    printVector(newVector);

    newVector.clear(); // This will clear the vector.
    newVector.empty(); // This will return true if the vector is empty. Otherwise returns false.
}

int main()
{
    vectorUseExample();
    return 0;
}