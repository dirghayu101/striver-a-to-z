/*
                        4_pattern.cpp
        This question is here just to remember this functionality of char.

        By: Dirghayu Joshi
        on: 8/June/2023
*/

/*
Question link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662284916/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_14
*/
#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
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