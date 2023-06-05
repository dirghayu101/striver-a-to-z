#include <iostream>
using namespace std;

void drawPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = i; k <= i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Hello World";
    cout << endl;
    drawPattern(5);
    return 0;
}