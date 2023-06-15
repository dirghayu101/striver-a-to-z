/*
                   5_sumOfDivisors.cpp
        This was a really interesting question. My solution was out of bound.

        By: Dirghayu Joshi
        On: 15/June/2023
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// NOTE: Initial brute force solution.
int sumDiv(int num)
{
    int result = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (!(num % i))
        {
            result += i;
        }
    }
    return result + num;
}
long long sumOfDivisors(int N)
{
    if (N == 1)
    {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= N; i++)
    {
        result += sumDiv(i);
    }
    return result;
}
// NOTE: Ends here.

// NOTE: Optimized solution starts here.
long long sumOfDivisors(int N)
{
    long long result = 0;
    for (int i = 1; i <= N; i++)
    {
        // Re-read the question several times.
        result += i * (N / i);
    }
    return result;
}

/*
Let's say the value of N is 4.

So, 1 will come N/1 times, i.e. 4 times.
Similarly, 2 will come 2 times as factor i.e. N/2 times.
And, 3 as N/3 times.
This goes on for every case.

Based on this observation, we are solving this question.
*/
// NOTE: Optimized solution ends here.