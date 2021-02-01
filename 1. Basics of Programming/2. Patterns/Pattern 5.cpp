/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

        *
    *   *   *
*   *   *   *   *
    *   *   *
        *
        
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, leftspace, star, k = 1; // k is used for managing count of stars in each row.

    // Code to print stars in 1st half rows

    for (row = 1; row <= n / 2 + 1; row++)
    {
        for (leftspace = n / 2; leftspace >= row; leftspace--) // loop to print space in each row
            cout << "	";

        for (star = 1; star <= k; star++)                    // loop to print * in each row
            cout << "*	";

        k = k + 2;

        cout << endl;                                       // move to next line
    }

    // Code to print stars in 2nd half rows
    k = n - 2;
    for (row = 1; row <= n / 2; row++)
    {
        for (leftspace = 1; leftspace <= row; leftspace++) // loop to print space in each row
            cout << "	";

        for (star = 1; star <= k; star++)                   // loop to print * in each row
            cout << "*	";

        k = k - 2;

        cout << endl;                                       // move to next line
    }
}