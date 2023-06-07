/*
                1_pattern.cpp
Second tricky pattern question in this link (https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/), 9th one, for me.

On: 7/June/2023
By: Dirghayu Joshi
*/

/*
Question: For an input 5:
Checkout this: https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9
*/
#include <iostream>
using namespace std;

void printDiamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        int stars = i;
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        int stars = i;
        for (int k = 1; k <= stars; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;
    printDiamond(n);
    return 0;
}