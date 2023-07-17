References:
1. Theory: https://dzone.com/articles/memoization-make-recursive-algorithms-efficient
2. Simple Implementation: https://dev.to/ionabrabender/memoization-and-recursion-228f

Memoization is a technique for implementing dynamic programming to make recursive algorithms efficient. It often has the same benefits as regular dynamic programming without requiring major changes to the original more natural recursive algorithm.

# Idea of memoization:
-> First we design recursive algorithm.
-> If recursive calls with the same arguments are repeatedly made, then the inefficient recursive algorithm can be memoized by saving these subproblem solutions in a table so they do not have to be recomputed.

# Consider this fibonacci solution in JS without memoization:

```js
    function recursiveFibonacci(n) {
    if (n <= 1) {
        return n;
    }
    return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
    }
    recursiveFibonacci(3)
```

The tree structure for recursiveFibonacci(3) will be something like this:
                            recursiveFibonacci(3)
                            /                   \
                    recursiveFibonacci(2)      recursiveFibonacci(1)
                    /                   \
            recursiveFibonacci(1)       recursiveFibonacci(0)
    
You can see in the tree representation that recursiveFibonacci(1) gets called twice. This solution is exponential and for bigger number like recursiveFibonacci(8) there will be several more repetitions.

To solve this, we cache the result as we get it.

# Memoization implementation:
```js
// We've separated out the memoization function from our Fibonacci calculating function to allow it to be reused.
function memoize(fn) {

    // We create the cache which we'll use to store the inputs and calculated results.
    const memoCache = {};

    return function(n) {

        // We can check if we've already performed a calculation using the given input.
        // If we have, we can simply return that result.
        if(memoCache[n]) {
            return memoCache[n];
        }

        // If we don't find the current input in our cache, we'll need to perform the calculation.
        // We also need to make sure we store that input and result for future use.
        const result = fn(n);
        memoCache[n] = result;

        return result;

    }

}

// Our recursiveFibonacci function can remain the same.
function recursiveFibonacci(n) {

    if (n <= 1) {
        return n;
    }

    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);

}

```