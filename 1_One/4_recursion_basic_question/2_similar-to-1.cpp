// Question link: https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

vector<string> printNTimes(int n)
{
    string str = "Coding Ninjas";
    if (n == 1)
    {
        return {str};
    }
    vector<string> arr = printNTimes(n - 1);
    arr.push_back(str);
    return arr;
}