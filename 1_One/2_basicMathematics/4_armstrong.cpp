/*
                    4_armstrong.cpp
    Program to check if a number is an armstrong number.

    By: Dirghayu Joshi
    On: 15/June/2023
*/

/*
Question Link: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// NOTE: My solution starts here.
string armstrongNumber(int n)
{
    int tempNum = n;
    int newNum = 0;
    while (tempNum > 0)
    {
        int digit = tempNum % 10;
        newNum += pow(digit, 3);
        tempNum /= 10;
    }
    return newNum == n ? "Yes" : "No";
}
// NOTE: My solution ends here.