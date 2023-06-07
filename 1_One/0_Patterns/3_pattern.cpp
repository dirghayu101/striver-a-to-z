/*
                    3_pattern.cpp
    Worth a revisit someday.

    By: Dirghayu Joshi
    on: 7/June/2023
*/

/*
Question link: https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12
*/
#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        int space = 2 * (n - i);
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
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