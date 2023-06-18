/*
                        2_reverseString.cpp
            This program will reverse the input string.

            By: Dirghayu Joshi
            On: 18/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printReverseString(string str)
{
    if (!str.length())
    {
        cout << "";
        return;
    }
    cout << str[str.length() - 1];
    str.pop_back();
    return printReverseString(str);
}

string reverseString(string current, string reverse = "")
{
    if (!current.length())
    {
        return reverse;
    }
    reverse.push_back(current[current.length() - 1]);
    current.pop_back();
    return reverseString(current, reverse);
}

int main()
{
    string str;
    cout << "Enter the string to be reversed: ";
    getline(cin, str);
    printReverseString(str);
    str = reverseString(str);
    cout << endl
         << "The reversed string is: " << str;
    return 0;
}