/*
                        2_vector.cpp
            Explanation of vector STL in CPP.

            In C++, vectors are dynamic arrays, that can grow or shrink and their storage is handled by the container itself.

            Vectors are dynamic arrays that can store elements of the same data types. The size of the vectors can change during runtime whenever we add or delete an element. The elements in a vector are stored in contiguous memory locations and can be traversed and accessed easily.

            By: Dirghayu Joshi
            on: 10/June/2023
*/

#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    // Declaration of vector in CPP.
    vector<int> myVector;

    myVector.push_back(5);
    myVector.emplace_back(9);
    /*
    NOTE: Difference btw emplace_back and push_back.
    emplace_back() constructs the object in-place at the end of the list, potentially improving performance by avoiding a copy operation, while push_back() adds a copy of the object to the end of the list.
    */

    // vector of pair type.    
    vector<pair<int, int> > pairVector;
    pairVector.push_back(make_pair(1, 3));
    pairVector.emplace_back(make_pair(9, 13));

    // Will create a vector with 5 values of 100.
    vector<int> myVector(5, 100); 

    // Will create a vector with 5 garbage values.
    vector<int> myVector(5);
    // This will increase the size of the vector and insert 11 at the 5th index.
    myVector.emplace_back(11); 

    vector<int> myVector(5, 20);
    //This will create a copy of the myVector.
    vector<int> secondMyVector(myVector);

    // Accessing elements in vector.

}

int main()
{
    explainVector();
    return 0;
}