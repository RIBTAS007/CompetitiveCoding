/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

                *
            *   *
        *   *   *
    *   *   *   *
*   *   *   *   *

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int row, space, star;

    for (row = 1; row <= n; row++)                 // loop for each row
    {
        for (space = n - 1; space >= row; space--) // loop to print space in each row
            cout << "	";

        for (star = 1; star <= row; star++)        // loop to print * in each row
            cout << "*	";

        cout << endl;                              // move to next line
    }
}