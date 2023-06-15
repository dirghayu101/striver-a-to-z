/*
                3_GCD.cpp
    Program to find GCD of two inputted numbers.

    By: Dirghayu Joshi
    On: 15/June/2023
*/

/*
Question link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// NOTE: My solution 1. This is not a fair solution, I used the inbuilt library.
int findGCD(vector<int> &nums)
{
    int lowest = INT_MAX;
    int greatest = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (lowest > nums[i])
        {
            lowest = nums[i];
        }
        if (greatest < nums[i])
        {
            greatest = nums[i];
        }
    }
    return gcd(lowest, greatest);
}
// NOTE: Solution 1 ends here.

// NOTE: Solution 2 without any external library starts here.
int getGCD(int num1, int num2)
{
    int gcd = 1;
    for (int i = 2; i <= num1; i++)
    {
        if (!(num1 % i || num2 % i))
        {
            gcd = i;
        }
    }
    return gcd;
}

int findGCD(vector<int> &nums)
{
    int lowest = INT_MAX;
    int greatest = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (lowest > nums[i])
        {
            lowest = nums[i];
        }
        if (greatest < nums[i])
        {
            greatest = nums[i];
        }
    }
    return getGCD(lowest, greatest);
}
// NOTE: Solution 2 ends here.

// NOTE: The ideal solution will use euclidean algorithm.

// Recursive
int getEuclideanGCDRecursion(int lower, int upper)
{
    if (upper % lower == 0)
        return lower;
    if (lower == 1)
        return 1;
    return getEuclideanGCDRecursion(upper % lower, lower);
}