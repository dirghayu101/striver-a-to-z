/*
                5_pattern.cpp
    This question had a use of typecasting.

    By: Dirghayu Joshi
    on: 8/June/2023
*/

/*
Question Link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_16
*/
#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char start = 'A';
        for (int j = 0; j <= i; j++)
        {
            char print = start + i;
            // cout << print;       //Other way of doing this.
            // cout << ((char) start + i)  //This didn't work.
            cout << ((char)(start + i)); // This works.
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