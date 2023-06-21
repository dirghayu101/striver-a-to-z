/*
                        6_lowestHighestFrequency.cpp
        Program to find the lowest and highest frequency element in an array.

        By: Dirghayu Joshi
        On: 21/June/2023
*/

/*
Question link: https://leetcode.com/problems/frequency-of-the-most-frequent-element/
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxFrequency(vector<int> &nums, long k)
{
    sort(nums.begin(), nums.end());

    int pos = 0;
    long result = 0;
    long window_size = 0;
    long window_sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        window_sum += nums[i];
        window_size = i - pos + 1;

        while ((nums[i] * window_size - window_sum) > k)
        {
            window_sum -= nums[pos++];
            window_size--;
        }

        result = max(result, window_size);
    }
    return result;
}