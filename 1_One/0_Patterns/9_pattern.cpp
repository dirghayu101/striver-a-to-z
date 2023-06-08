/*
                9_pattern.cpp
    This question was quite tricky. I think there will be some better ways of solving this.

    By: Dirghayu Joshi
    on: 8/June/2023
*/

/*
Question link: https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_22
*/

#include <iostream>
using namespace std;
void printPattern(int currentIndex, int endIndex)
{
    int startValue = endIndex;

    // First part of pattern.
    int temp = currentIndex;
    while (temp--)
    {
        cout << startValue << " ";
        startValue--;
    }

    // Second part of pattern. Repetition.
    int repeatElement = startValue + 1;
    int timeRepeat = ((endIndex * 2) - 1) - (currentIndex * 2);
    if (timeRepeat > 0)
        while (timeRepeat--)
            cout << repeatElement << " ";

    // Third part of pattern. Reverse count.
    startValue = currentIndex == endIndex ? startValue + 2 : repeatElement;
    while (startValue <= endIndex)
    {
        cout << startValue << " ";
        startValue++;
    }

    // New Line.
    cout << endl;
}
void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printPattern(i, n);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        printPattern(i, n);
    }
}