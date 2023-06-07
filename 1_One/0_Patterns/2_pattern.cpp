/*
                    2_pattern.cpp
    This was kind of tricky. Not that difficult.

    By: Dirghayu Joshi
    on: 7/June/2023
*/

/*
Question Link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11
*/
#include <iostream>
using namespace std;

void printTriangle(int n)
{
    bool printOne;
    for (int i = 1; i <= n; i++)
    {
        printOne = i % 2 == 0 ? false : true;
        for (int j = 1; j <= i; j++)
        {
            printOne ? cout << "1 " : cout << "0 ";
            printOne = !printOne;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;
    printTriangle(n);
    return 0;
}