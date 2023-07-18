// Consider these two methods:

#include<bits/stdc++.h>
using namespace std;

vector<int> myVector;

// NOTE: First one ->
vector<int>& printNosFirst(int x)
{
    // Write Your Code Here
    myVector.push_back(x);
    if (x == 1)
    {
        return myVector;
    }
    return printNosFirst(x - 1);
}

// NOTE: Second one ->
vector<int> printNosSecond(int x)
{
    // Write Your Code Here
    myVector.push_back(x);
    if (x == 1)
    {
        return myVector;
    }
    return printNosSecond(x - 1);
}

// The second solution is much faster than the first one, thus it will pass all the test cases for this problem.

// Problem: https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1


// Now, I have this explanation from chatGPT and I kind of get it:

// NOTE: Go through this solution.
/*
Sure! Let's use the examples of `printNos(3)` to see how the two solutions behave differently:

First Solution:
```cpp
vector<int> myVector;
vector<int> printNos(int x) {
    myVector.push_back(x);
    if (x == 1) {
        return myVector;
    }
    return printNos(x - 1);
}

int main() {
    vector<int> myVector = printNos(3);
    printVector(myVector);
    return 0;
}
```

In the first solution, we create a new vector `myVector` each time we enter the `printNos` function. Here's what happens step by step:

1. `printNos(3)` is called. `myVector` is an empty vector at this point.
2. Inside `printNos(3)`, we add `3` to the vector, so `myVector` becomes `{3}`.
3. We check if `x` is equal to `1`, which is not the case (`x=3`), so we call `printNos(x-1)`, which is `printNos(2)`.

Now, the function call `printNos(2)` creates a new vector again, and the process repeats:

1. `printNos(2)` is called, with a new empty vector.
2. Inside `printNos(2)`, we add `2` to the vector, so `myVector` becomes `{2}`.
3. We check if `x` is equal to `1`, which is not the case (`x=2`), so we call `printNos(x-1)`, which is `printNos(1)`.

Again, we have a new vector, and the process repeats:

1. `printNos(1)` is called, with a new empty vector.
2. Inside `printNos(1)`, we add `1` to the vector, so `myVector` becomes `{1}`.
3. We check if `x` is equal to `1`, and this time it is (`x=1`), so we return the vector `{1}`.

Now, we've reached the base case of the recursion, so the function starts to unwind:

1. We return the vector `{1}` to the previous call, which is `printNos(2)`.
2. The previous call continues, and the vector `myVector` remains `{2}` (the vector returned by the previous call).
3. The same process happens for `printNos(3)`, and the final `myVector` is `{3}`.

When we print the vector in the `main` function using `printVector(myVector)`, it will print `3` because it contains only the last element added in the final recursive call.

Second Solution:
```cpp
vector<int> myVector;

vector<int>& printNos(int x) {
    myVector.push_back(x);
    if (x == 1) {
        return myVector;
    }
    return printNos(x - 1);
}

int main() {
    vector<int> myVector = printNos(3);
    printVector(myVector);
    return 0;
}
```

In the second solution, we use a reference `&` in the return type of `printNos` to make sure we work with the same vector across all recursive calls. Here's what happens step by step:

1. `printNos(3)` is called. `myVector` is an empty vector at this point.
2. Inside `printNos(3)`, we add `3` to the vector, so `myVector` becomes `{3}`.
3. We check if `x` is equal to `1`, which is not the case (`x=3`), so we call `printNos(x-1)`, which is `printNos(2)`.

Now, the function call `printNos(2)` continues working with the same vector:

1. `printNos(2)` is called, and `myVector` is `{3}` (the vector returned by the previous call).
2. Inside `printNos(2)`, we add `2` to the vector, so `myVector` becomes `{3, 2}`.
3. We check if `x` is equal to `1`, which is not the case (`x=2`), so we call `printNos(x-1)`, which is `printNos(1)`.

Again, we continue working with the same vector:

1. `printNos(1)` is called, and `myVector` is `{3, 2}` (the vector returned by the previous call).
2. Inside `printNos(1)`, we add `1` to the vector, so `myVector` becomes `{3, 2, 1}`.
3. We check if `x` is equal to `1`, and this time it is (`x=1`), so we return the vector `{3, 2, 1}`.

Now, we've reached the base case of the recursion, so the function starts to unwind:

1. We return the vector `{3, 2, 1}` to the previous call, which is `printNos(2)`.
2. The previous call continues, and the vector `myVector` remains `{3, 2, 1}` (the vector returned by the previous call).
3. The same process happens for `printNos(3)`, and the final `myVector` is `{3, 2, 1}`.

When we print the vector in the `main` function using `printVector(myVector)`, it will print `3 2 1`, which is the correct result containing all the elements added from the recursive calls.

*/