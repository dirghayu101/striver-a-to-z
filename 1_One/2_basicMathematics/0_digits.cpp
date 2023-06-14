/*
                0_digits.cpp
    I made a corner case error in this question. I figured it out, but shouldn't have made it in the first place.

    By: Dirghayu Joshi
    On: 14/June/2023
*/

/*
Question Link: https://practice.geeksforgeeks.org/problems/count-digits5716/1
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int evenlyDivides(int N)
{
    int count = 0;
    int num = N;
    while (N != 0)
    {
        int lastDigit = N % 10;
        if (lastDigit != 0 && num % lastDigit == 0)
        {
            count++;
        }
        N /= 10;
    }
    return count;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int count = evenlyDivides(number);
    cout << "The result is " << count << ".";
    return 0;
}