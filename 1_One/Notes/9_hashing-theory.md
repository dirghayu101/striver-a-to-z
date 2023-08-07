1. An average computer performs 10^8 operations in one second.

2. If the time complexity of a program is p*n where value of both p and n is 10^5, then the program will perform 10^10 operations.

3. Time taken for completion = 10^10 / 10^8, which will be equal to 100 seconds.

4. Hashing is a technique which pre-computes data and store it and the data is then fetched on demand.

5. Declaring array for hashing:
```cpp
int arr[1e5];   //Array of 10^5.
int hashArr[1e3] = {0};    //Array with all values initialized to 0.
```

6. For integers, you can only declare 10^6 size array in the main method whereas globally you can declare an array of size 10^7.

7. If you declare an integer array globally, all the values will automatically be assigned 0 instead of garbage values.

8. For boolean, you can declare array of size 10^7 in the main method and 10^8 globally.

9. If you want to use the concept of hashing on characters, you can use ASCII values. 

10. The formulae used in programming is:
```cpp
int index = characterGiven - 'a'; // Value of 'a' in ASCII is 97. It automatically typecast.
// NOTE: This will only work for lowercase alphabets.
int arr[256] = {0};
for(int i = 0; i <= randString.size(); i++){
    arr[randString[i]] += 1;        //This will automatically typecast character to int.
}
```

11. If you have to create a hash for numbers greater than 10^8, you can use maps of STL in CPP. In  case of java we have hash map data structure.
One point that you have to remember is that map stores your items in sorted order.

12. Storing and fetching in an ordered map takes log(n) time complexity. This is for average, worst and best case.

13. Map program example:
```cpp
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;      //The first datatype can be long or long long or long long int, based on your use case.
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // To print the content of a map.
    for(auto it: map){
        cout << it.first << " -->  " << it.second << endl;
    }
}
```

14. Ordered map will automatically sort the inserted elements based on the index value. Even alphabets will be sorted.

15. Unordered map differs from the ordered map in way that it doesn't sort the inserted values. There is no order, it can be in any random order. 
The advantage of unordered map is constant time complexity for storing and fetching, i.e. O(1). The worst case though is O(n). O(1) is average and best case time complexity.

16. You should always choose unordered map over ordered map because of the reduce in time complexity.