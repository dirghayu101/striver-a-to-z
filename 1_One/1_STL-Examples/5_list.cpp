/*
                5_list.cpp
            List in STL, CPP.

            By: Dirghayu Joshi
            on: 12/June/2023
*/

/*
NOTE: List is similar to vector but the biggest advantage of list is that it gives us front operations.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainList()
{
    list<int> ls;
    ls.push_back(2);      //{2}
    ls.emplace_back(5);   //{2, 5}
    ls.emplace_front(7);  //{7, 2, 5}
    ls.emplace_front(11); //{11, 7, 2, 5}
    // Has similar functions to vectors:
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main()
{
    explainList();
    return 0;
}