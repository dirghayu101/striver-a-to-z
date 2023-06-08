/*
                6_pattern.cpp
    Interesting question. Worth a revisit.

    By: Dirghayu Joshi
    on: 8/June/2023
*/

/*
Question link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17
*/

#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space--)
            cout << " ";
        char first = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << first;
            first++;
        }
        char second = first - 2;
        for (int k = i; k > 1; k--)
        {
            cout << second;
            second--;
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