/*
                                1_pair.cpp
    Explanation of pair template type in standard template library in CPP.

    By: Dirghayu Joshi
    on: 9/June/2023
*/

#include <bits/stdc++.h>
using namespace std;

/*
NOTE: This code didn't work.
void explainPairFirst()
{
    pair<int, int> simplePair = {1, 3}; // Pair definition with 2 elements, 1 and 3.
    cout << "Normal pairs: " << simplePair.first << " " << simplePair.second;
    cout << endl
         << endl;

    pair<int, pair<int, int>> nestedPair = {1, {3, 4}}; // Nested pair, with a pair nested in a pair.
    cout << "Nested pairs: " << nestedPair.first << " " << nestedPair.second.first << " " << nestedPair.second.second;
    cout << endl
         << endl;

    pair<int, int> pairArr[] = {{2, 3}, {9, 4}, {8, 14}, {11, 12}};
    cout << "Array of pairs: " << pairArr[0].first << " " << pairArr[3].second << " " << pairArr[2].first;
}
*/

void explainPairSecond()
{
    // Normal pair.
    pair<int, int> simplePair(1, 3); // Pair definition with 2 elements, 1 and 3.
    cout << "Normal pairs: " << simplePair.first << " " << simplePair.second;
    cout << endl
         << endl;

    // Nested pair.
    pair<int, pair<int, int> > nestedPair(1, make_pair(3, 4)); // Nested pair, with a pair nested in a pair.
    cout << "Nested pairs: " << nestedPair.first << " " << nestedPair.second.first << " " << nestedPair.second.second;
    cout << endl
         << endl;

    // Declaring an array of pairs.
    pair<int, int> pairArr[] = {make_pair(2, 3), make_pair(9, 4), make_pair(8, 14), make_pair(11, 12)};
    cout << "Array of pairs: " << pairArr[0].first << " " << pairArr[3].second << " " << pairArr[2].first;
}

int main()
{
    explainPairSecond();
    return 0;
}