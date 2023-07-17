NOTE: Reference article: https://developer.ibm.com/articles/l-recurs/

Consider this case: you have to calculate factorial of a number.

An interesting property of a factorial is that the factorial of a number is equal to the starting number multiplied by the factorial of the number immediately below it. For example, factorial(5) is the same as 5 * factorial(4).

Based on this, you can write a function like this:

```cpp
int factorial(int n)
{
   return n * factorial(n ‑ 1);
}
```

The problem with the above function is that it will run indefinitely. There is no case where it stops.

Thus we need a condition to get a return value from the above function and to stop it from running indefinitely.

Here is the actual recursion function:
```cpp
int factorial(int n)
{
   if(n == 1)
   {
      return 1;
   }
   else
   {
      return n * factorial(n ‑ 1);
   }
}
```

As you can see, as long as the initial value is above zero, this function will terminate. The stopping point is called the base case. 

## A base case is the bottom point of a recursive program where the operation is so trivial as to be able to return an answer directly. All recursive programs must have at least one base case and must guarantee that they will hit one eventually; otherwise the program would run forever or until the program ran out of memory or stack space.


So, based on the above analysis to get the algorithm, here are the steps we took:
1. Initialize the algorithm. Recursive programs often need a seed value to start with. This is accomplished either by using a parameter passed to the function or by providing a gateway function that is non-recursive but that sets up the seed values for the recursive calculation.
2. Check to see whether the current value(s) being processed match the base case. If so, process and return the value.
3. Redefine the answer in terms of a smaller or simpler sub-problem or sub-problems.
4. Run the algorithm on the sub-problem.
5. Combine the results in the formulation of the answer.
6. Return the results.


# Using an Inductive definition -> 
1. Sometimes when writing recursive programs, finding the simpler sub-problem can be tricky. Dealing with inductively-defined data sets, however, makes finding the sub-problem considerably easier. An inductively-defined data set is a data structure defined in terms of itself -- this is called an inductive definition.

2. For example, linked lists are defined in terms of themselves. A linked list consists of a node structure that contains two members: the data it is holding and a pointer to another node structure (or NULL, to terminate the list). Because the node structure contains a pointer to a node structure within it, it is said to be defined inductively.

3. With inductive data, it is fairly easy to write recursive procedures. Notice how like our recursive programs, the definition of a linked list also contains a base case -- in this case, the NULL pointer. Since a NULL pointer terminates a list, we can also use the NULL pointer condition as a base case for many of our recursive functions on linked lists.