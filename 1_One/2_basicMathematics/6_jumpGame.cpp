/*

                    6_jumpGame.cpp
        Interesting question, medium difficulty in leet code.

        By: Dirghayu Joshi
        On: 15/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// NOTE: Approach 1 starts here.

/*
About approach 1:
-> The best index to jump to will be the one with the maximum value.
-> Jump to the index with maximum value and keep doing that.
-> Didn't work for this input: [10,9,8,7,6,5,4,3,2,1,1,0]
*/

class Solution
{
public:
    int findMaxValue(int startPoint, int endPoint, vector<int> &nums)
    {
        int maxValue = INT_MIN;
        int maxIndex;
        for (int i = startPoint; i <= endPoint; i++)
        {
            if (nums[i] >= maxValue)
            {
                maxValue = nums[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    int jump(vector<int> &nums)
    {
        int endValue = nums.size() - 1;
        // Corner case: if there is only one element.
        // Or, if the first element of the vector has big enough value to reach the end.
        if (endValue == 0 || nums[0] >= endValue)
        {
            return 1;
        }
        int jump = 1;
        int currentPosition = 0;
        while (currentPosition <= endValue)
        {
            int temp = nums[currentPosition];
            int startPoint = currentPosition + 1;
            int endPoint = currentPosition + temp;
            // best position should have maximum value.
            int newBestPosition = findMaxValue(startPoint, endPoint, nums);
            // Check if the new best position can make you reach the end.
            jump++;

            if (nums[newBestPosition] + currentPosition >= endValue)
            {
                break;
            }
            else
            {
                currentPosition = newBestPosition;
            }
        }
        return jump;
    }
};

// NOTE: Approach 1 ends here.

// Only greedy algorithm or dynamic program can help with this problem. Normal solution is not possible.

// A solution worked out. It was not a greedy solution or a DP solution.
// This is the link: youtube.com/watch?v=wLPdkLM_BWo

int findBestPosition(int startIndex, int endIndex, vector<int> &nums)
{
    int maxValue = INT_MIN;
    int maxIndex;
    for (int i = startIndex; i <= endIndex; i++)
    {
        if ((nums[i] + i) >= maxValue)
        {
            maxValue = nums[i] + i;
            maxIndex = i;
        }
    }
    return maxIndex;
}

int jump(vector<int> &nums)
{
    int finalValue = nums.size() - 1;
    if (finalValue == 0)
    {
        return 0;
    }
    int jump = 0, currentValue = 0;

    while (currentValue <= finalValue)
    {
        jump++;
        if ((currentValue + nums[currentValue]) >= finalValue)
        {
            break;
        }
        int startIndex = currentValue + 1, endIndex = currentValue + nums[currentValue];
        currentValue = findBestPosition(startIndex, endIndex, nums);
    }
    return jump;
}