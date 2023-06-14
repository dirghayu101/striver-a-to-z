/*
                         2_palindrome.cpp
        The palindrome question, but you are not allowed to use String.

        By: Dirghayu Joshi
        On: 14/June/2023
*/

/*
Question Link: https://leetcode.com/problems/palindrome-number/submissions/971249770/
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// NOTE: My solution starts here.
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    vector<int> reverse;
    int tempNum = x;
    while (x > 0)
    {
        int lastDigit = x % 10;
        reverse.emplace_back(lastDigit);
        x /= 10;
    }
    for (int i = reverse.size() - 1; i >= 0; i--)
    {
        int lastDigit = tempNum % 10;
        tempNum /= 10;
        if (reverse[i] != lastDigit)
        {
            return false;
        }
    }
    return true;
}
// NOTE: My solution ends here.
