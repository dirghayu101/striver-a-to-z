/*
                7_isPalindrome.cpp
Program to find if an input string is palindrome. 
(Using recursion if possible.)

By: Dirghayu Joshi
On: 7/August/2023

Question link: https://leetcode.com/problems/valid-palindrome/
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPalindrome(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;
     int start = 0, end = str.length() - 1;
    while(start <= end){
        int startIndexASCII = static_cast<int>(str[start]);
        int endIndexASCII = static_cast<int>(str[end]);
        // Logic for skipping. (Accept 48 to 57 and 97 to 122)
        if(!((startIndexASCII >= 48 && startIndexASCII <= 57) || (startIndexASCII >= 97 && startIndexASCII <= 122))){
            start++;
            continue;
        }
        if(!((endIndexASCII >= 48 && endIndexASCII <= 57) || (endIndexASCII >= 97 && endIndexASCII <= 122))){
            end--;
            continue;
        }
        // If it reaches here, that means both are lower case alphabets.
        if(startIndexASCII != endIndexASCII){
            return false;
        } else{
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    if(isPalindrome(str)){
        cout << "The input string is palindrome.";
    } else{
        cout << "The input string is not palindrome.";
    }
    return 0;
}