// Find sum of 'n' number using recursion and then write the optimal solution.

// Question link: https: // www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

int sumFirstN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sumFirstN(n - 1) + n;
}

int sumFormulae(int n){
    return (n*(n+1)) / 2;
}