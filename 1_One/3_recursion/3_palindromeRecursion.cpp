/*
                                3_palindromeRecursion.cpp
            This program will find if a given input string is palindrome using recursion.

            By: Dirghayu Joshi
            On: 18/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    if (str.length() <= 1) // For value 0 and 1.
    {
        return true;
    }
    if (str[str.length() - 1] != str[0])
    {
        return false;
    }

    /*
    NOTE: This is inefficient.
    // remove last element.
    str.pop_back();
    // remove first element.
    str = str.substr(1);
    */

    return isPalindrome(str.substr(1, str.length() - 2));
}
int main()
{
    string str;
    cout << "Enter the string value: ";
    cin >> str;
    cout << endl
         << endl;
    isPalindrome(str) ? cout << "Palindrome." : cout << "Not Palindrome.";
    return 0;
}