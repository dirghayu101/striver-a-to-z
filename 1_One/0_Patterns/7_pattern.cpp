/*
                    7_pattern.cpp
    Interesting question. Worth a revisit.

    By: Dirghayu Joshi
    on: 8/June/2023
*/

/*
Question link: https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19
*/

#include <iostream>
using namespace std;

void printPattern(int stars, int space)
{
    int temp = stars;
    while (stars--)
        cout << "*";
    if (space != 0)
        while (space--)
            cout << " ";
    while (temp--)
        cout << "*";
    cout << endl;
}

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int stars = n - i + 1;
        int space = (n * 2) - (stars * 2);
        printPattern(stars, space);
    }
    for (int j = 1; j <= n; j++)
    {
        int stars = j;
        int space = (n * 2) - (stars * 2);
        printPattern(stars, space);
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