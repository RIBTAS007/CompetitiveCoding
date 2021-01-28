/*

Question

1. You are given a number n.
2. You've to write code to print the pattern given in output format below

n=5

*   *   *       *
        *       *
*   *   *   *   *       
*       *       
*       *   *   *

*/

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, col;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (col == n / 2 + 1 || row == n / 2 + 1) // for middle row and column
                cout << "*	";
            else if (row == 1 && col <= n / 2)        // for top-left row of stars
                cout << "*	";
            else if (row == n && col > n / 2)         // for bottom-right row of stars
                cout << "*	";
            else if (col == 1 && row > n / 2)         // for bottom-left column of stars
                cout << "*	";
            else if (col == n && row <= n / 2)        // for top-right column of stars
                cout << "*	";
            else
                cout << "	";
        }

        cout << endl;
    }
}