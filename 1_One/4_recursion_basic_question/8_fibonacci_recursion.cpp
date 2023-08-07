/*
                        8_fibonacci_recursion.cpp
    For an input value 'n' this program will return the nth fibonacci number of the sequence.

    By: Dirghayu Joshi
    On: 7/08/2023

    Question link: https://leetcode.com/problems/fibonacci-number/
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        int current = 1, prev = 0;
        for(int i = 2; i <= n; i++){
            int temp = prev;
            prev = current;
            current = current + temp;
        }
        return current;
    }