/*
                        1_printUsingRecursion.cpp
        Print from 1 to n using recursion, where 1 will be inputted by the user.

        By: Dirghayu Joshi
        On: 18/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void recursivePrintFromN(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return;
    }
    cout << n << " ";
    return recursivePrintFromN(n - 1);
}

void recursivePrint(int n, int max)
{
    if (n == 0)
    {
        return;
    }
    cout << (max - n) + 1 << " ";
    return recursivePrint(n - 1, max);
}

int main()
{
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;
    cout << endl
         << "Print from 'n' to 1: " << endl;
    recursivePrintFromN(n);
    cout << endl
         << "Print from 1 to 'n': " << endl;
    recursivePrint(n, n);
    return 0;
}