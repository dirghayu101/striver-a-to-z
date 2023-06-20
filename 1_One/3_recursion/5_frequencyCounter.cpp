/*
                                5_frequencyCounter.cpp
            Program to get frequency of all the elements in an array.

            By: Dirghayu Joshi
            On: 20/June/2023

*/

// Question link: https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
        mp[arr[i]]++;

    for (int i = 0; i < N; i++)
    {
        arr[i] = mp[i + 1];
    }
}