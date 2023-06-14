/*
                            1_reverseNum.cpp
        So, I am embarrassed of this solution I have. But it is going to be a good reference point to check my progression in DSA.

        By: Dirghayu Joshi
        On: 14/June/2023
*/

/*
Problem Link: https://leetcode.com/problems/reverse-integer/
Difficulty: Medium (LOL)
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// NOTE: My solution starts here. This solution was accepted but it is wrong since I used a 64 bit integer in it. I am not permitted to use long.
bool isOutOfBound(bool negative, long currentReverse, long currentLast)
{
    if (((currentReverse * 10) + currentLast) > 2147483647)
    {
        return true;
    }

    return false;
}

bool hasNegativeOverflow(long num)
{
    if (num * -1 > 2147483647)
    {
        return true;
    }
    return false;
}

int reverse(int x)
{
    if (hasNegativeOverflow(x))
    {
        return 0;
    }
    bool negative = x < 0 ? true : false;
    x = x < 0 ? x * -1 : x;
    int reverse = 0;
    while (x > 0)
    {
        int lastDigit = x % 10;
        if (isOutOfBound(negative, reverse, lastDigit))
        {
            return 0;
        }
        reverse = (reverse * 10) + lastDigit;
        x /= 10;
    }
    if (negative)
    {
        return -1 * reverse;
    }
    return reverse;
}
// NOTE: My solution ends here.

// Alternative solution 1
int reverse(int x)
{
    vector<int> digits;
    int ans = 0, pm = 1;
    if (x == INT_MIN)
        return 0;
    if (x < 0)
    {
        pm = -1;
        x *= -1;
    }
    while (x > 0)
    {
        digits.push_back(x % 10);
        x /= 10;
    }

    for (int i = 0; i < digits.size(); i++)
    {
        if (ans > INT_MAX / 10)
            return 0;
        ans *= 10;
        if (ans > INT_MAX - digits[i])
            return 0;
        ans += digits[i];
    }
    ans *= pm;
    return ans;
}

// Other concise solution.
int reverse(int x)
{
    int reverse = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if (reverse > INT_MAX / 10 || reverse == INT_MAX / 10 && digit > 7)
            return 0;
        if (reverse < INT_MIN / 10 || reverse == INT_MIN / 10 && digit < -8)
            return 0;
        reverse = (reverse * 10) + digit;
        x /= 10;
    }
    return reverse;
}