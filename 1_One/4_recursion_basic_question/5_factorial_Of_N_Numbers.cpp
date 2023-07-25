/*
                            5_factorial_Of_N_Numbers.cpp

    You will be given a number 'n', you have to return a vector with all the factorial numbers below 'n'.

    Question link: https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

    By: Dirghayu Joshi
    On: 24/July/2023  
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// NOTE: This is my solution, it is partially correct. Time Complexity is more than expected.
vector <long long> resultVector;
long long currentFactorial = 1;
long long currentValue = 1;

vector<long long> factorialNumbers(long long n) {
   currentFactorial *= currentValue;
   if(currentFactorial > n){
       return resultVector;
   } 
   resultVector.push_back(currentFactorial);
   currentValue += 1;
   return factorialNumbers(n);
}

// NOTE: Now, I got this solution in discussion section and it's more optimized than mine.
long long f=1,x=2;
vector<long long> v;
vector<long long> factorialNumbers(long long n)
{
    if(f>n)
    {
        return v;
    }
    else
    {
        v.push_back(f);
        f*=x;
        x++;
        factorialNumbers(n);
    }
    return v;
}


// NOTE: Based on above solution, I optimized mine to this:
vector <long long> resultVector;
long long currentFactorial = 1;
long long currentValue = 1;

vector<long long> factorialNumbers(long long n) {
   currentFactorial *= currentValue;
   if(currentFactorial > n){
       return resultVector;
   } else{
    resultVector.emplace_back(currentFactorial);
    currentValue++;
    factorialNumbers(n);    //I am not returning here.
   }
   return resultVector;
}

