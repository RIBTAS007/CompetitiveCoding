/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

*   *   *       *   *   *
*   *               *   *
*                       *
*   *               *   *
*   *   *       *   *   *

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, star, space;

    int k = 1;                                        // k is used for keeping a count of spaces

    // Code to print 1st stars till first half of rows

    for (row = 1; row <= n / 2 + 1; row++)
    {
        for (star = n / 2 + 1; star >= row; star--)   //loop to print left side stars on each row
            cout << "*	";

        for (space = 1; space <= k; space++)         //loop to print space on each row
            cout << "	";

        k = k + 2;

        for (star = n / 2 + 1; star >= row; star--)  //loop to print right side stars on each row
            cout << "*	";

        cout << endl;                                // move to next line
    }
    
    // Code to print 1st stars till second half of rows

    k = n - 2;
    for (row = 1; row <= n / 2; row++)
    {
        for (star = 1; star <= row + 1; star++)        //loop to print left side stars on each row
            cout << "*	";

        for (space = 1; space <= k; space++)          //loop to print space on each row
            cout << "	";

        k = k - 2;

        for (star = 1; star <= row + 1; star++)       //loop to print right side stars on each row   
            cout << "*	";

        cout << endl;                                 // move to next line
    }
}