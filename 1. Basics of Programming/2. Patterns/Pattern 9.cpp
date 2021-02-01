/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

*               *   
    *       *
        *
    *       *
*               *


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
            if (row == col)
                cout << "*	";
            else if (row + col == n + 1)
                cout << "*	";
            else
                cout << "	";

        cout << endl;
    }
}