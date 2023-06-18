/*
                                4_decimalToBinary.cpp
                Program to convert an input number 'n' to its binary form using recursion.

                By: Dirghayu Joshi
                On: 18/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string decimalToBinary(int number, string result = "")
{
    char res = '0' + (number % 2);
    result.push_back(res);
    if (number == 0)
    {
        return result;
    }
    return decimalToBinary(number / 2, result);
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    string binary = decimalToBinary(number);
    cout << endl
         << binary;
    return 0;
}