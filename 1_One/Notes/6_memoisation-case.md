Consider the following cpp method to reverse a string:

```c++
string reverseString(string current, string reverse = "")
{
    if (!current.length())
    {
        return reverse;
    }
    reverse.push_back(current[current.length() - 1]);
    current.pop_back();
    return reverseString(current, reverse);
}
```

I have written this above function.

And, now consider the following method:

```c++
string reverseString(string input)
{
    if(input.equals(""))
    {
        return "";
    }
    return reverseString(input.substring(1)) + input.charAt(0);
}
```

Instead of declaring another variable to store the result like I have done in the first solution.

The second solution is storing the values using memoisation.
