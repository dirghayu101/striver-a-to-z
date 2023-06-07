/*
                0_pattern.cpp
First tricky pattern question in this link (https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/), 7th one, for me.

On: 7/June/2023
By: Dirghayu Joshi
*/

/*
Question:

Input: 5

Output:
    *
   ***
  *****
 *******
*********

Input will be int type 'n'.
*/

// ********************* Solution starts here **************************

#include <iostream>
using namespace std;

void drawPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space--)
            cout << " ";
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;
    drawPattern(n);
    return 0;
}