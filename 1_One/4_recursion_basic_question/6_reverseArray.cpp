/*
                6_reverseArray.cpp
        Reverse an array using recursion.

        By: Dirghayu Joshi
        On: 25/July/2023

        Question link: https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
*/

#include<bits/stdc++.h>
using namespace std;

// NOTE: I have taken references.

void reverse(int n, vector<int> &nums){
    if((nums.size() - n) >= n){
        return;
    }
    swap(nums[nums.size() - n], nums[n - 1]);
    reverse(n - 1, nums);   //Void type, so it doesn't return anything.
}

vector<int> reverseArray(int n, vector<int> &nums)
{
 reverse(n, nums);
 return nums;  
}
