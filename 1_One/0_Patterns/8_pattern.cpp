/*
                    7_pattern.cpp
    Interesting question. Worth a revisit.

    By: Dirghayu Joshi
    on: 8/June/2023
*/

/*
Question link: https://practice.geeksforgeeks.org/problems/square-pattern-1662287714/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_21
*/

#include <iostream>
using namespace std;

void patternFirst(int stars)
{
    while (stars--)
        cout << "*";
}

void patternSecond(int space)
{
    cout << "*";
    space -= 2;
    while (space--)
        cout << " ";
    cout << "*";
}

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        i == 1 || i == n ? patternFirst(n) : patternSecond(n);
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;
    printSquare(n);
    return 0;
}