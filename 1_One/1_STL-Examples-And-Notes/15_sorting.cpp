/*

                    15_sorting.cpp
        Covers the sorting function in the C++ STL.

        By: Dirghayu Joshi
        On: 13/June/2023
*/

/*
The sort() function in STL accepts two mandatory parameters: begin, and end, and sorts the range with-in the container in ascending order by default.

Syntax: sort(begin, end)

begin: It is an iterator pointing to the first element of a container.

end: It is an iterator pointing to element just after the last element of the container.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void ascendingSort()
{
    // Example in vector.
    vector<int> vec = {4, 2, 1};
    sort(vec.begin(), vec.end());
    cout << vec[0] << " " << vec[1] << " " << vec[2];

    // Example in array.
    int arr[] = {4, 2, 1};
    sort(arr, arr + 3);
    cout << arr[0] << " " << arr[1] << " " << arr[2];
}

void descendingSort()
{
    /*
    NOTES
        1-> We can use comparators to sort elements in descending order.
        2-> The role of a comparator in most functions is to compare between two elements before performing an operation.
        3-> sort() function accepts an optional third parameter which is a comparator that allows us to define a custom comparison check between two elements while sorting them.
        4-> In order to sort the container in descending order, we need to put the greater element first while comparing between two elements.
        5-> In STL, we already have a comparator defined to do this which is called greater().
        6-> We just need to pass this greater<container_data_type>() as the third parameter to sort function as shown in the below codes and it will sort the comparator in descending order.
    */

    // Example in vector.
    vector<int> vec = {4, 2, 1};
    sort(vec.begin(), vec.end(), greater<int>());
    cout << vec[0] << " " << vec[1] << " " << vec[2];

    // Example in array.
    int arr[] = {4, 2, 1};
    sort(arr, arr + 3, greater<int>());
    cout << arr[0] << " " << arr[1] << " " << arr[2];
}

int main()
{
    ascendingSort();
    descendingSort();
    return 0;
}