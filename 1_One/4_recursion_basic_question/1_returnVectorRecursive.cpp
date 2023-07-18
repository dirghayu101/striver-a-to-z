/*
                    1_returnVectorRecursive.cpp
        You will be given an integer 'n', you have to create a vector from 1 to 'n' in increasing order and return it without using loop.

        By: Dirghayu Joshi
        On: 18/July/2023
*/

// Question link: https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;

// My approach method. Instead of sending myVector in each iteration, I used a global declaration.
// And I got time limit exceeded error. I guess that is because of emplace method. It is taking more time in insertion. Rest iteration is O(n), the only thing that can cause problem is emplace.

vector<int> returnVector(int n, vector<int> myVector){
    if (n == 0)
    {
        return myVector;
    }
    myVector.emplace(myVector.begin(), n);
    return returnVector(n - 1, myVector);
}

// NOTE: Other solution using helper method and kind of memoisation.
void helperPrintNos(int x, vector<int>& answer) //I forgot to pass it as reference, that wasted a lot of time.
{
    if (x == 0)
    {
        return;
    }
    answer.emplace(answer.begin(), x);
    helperPrintNos(x - 1, answer);
}

vector<int> printNos(int x)
{
    vector<int> answer;
    helperPrintNos(x, answer);
    return answer;
}

void printVector(vector<int> myVector){
    cout << endl
         << "Elements in the vector: " << endl;
    for (int i : myVector)
    {
        cout << i << " ";
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> myVector = printNos(n);
    printVector(myVector);
    return 0;
}

// NOTE: Not my solution
vector<int> printNos(int x)
{
    if (x == 1)
    {
        return {1};
    }
    else
    {
        // Get an array from the base case. Then start pushing all the elements.
        // That's very clever for my reasoning, LOL.
        std::vector<int> array = printNos(x - 1);
        array.push_back(x);
        return array;
    }
}

