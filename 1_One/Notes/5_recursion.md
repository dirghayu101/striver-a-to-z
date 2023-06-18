Pros of recursion:

1. Recursion bridges the gap between elegance and complexity. The code with really complicated implementation can be simplified using recursion.
2. Reduces the need for complex loops and auxillary data structures.
   Auxiliary data structure is a fancy way of saying helper data structure.
3. Can reduce time complexity easily with memoization.
   In computing, memoization is used to speed up computer programs by eliminating the repetitive computation of results, and by avoiding repeated calls to functions that process the same input.
4. Works really well recursive structures like trees and graphs.

Cons of recursion:

1. Slowness due to CPU overhead.
2. Can lead to out of memory error/ stack overflow exception.
3. Can be unnecessarily complex if poorly constructed.

## How to write a recursive call function?

To get started with recursion, you have to answer following two basic questions in a recursive call:

1. What is the base case? When can I no longer continue?
2. What is the smallest amount of work I can do in each iteration?

To answer the first question, think about a corner case. If you have to write a recursive function to reverse a string, think about what should be the result for a input string ""?
