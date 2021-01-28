/*

Question

1. You are given a number n.
2. You've to write code to print the pattern given in output format below

n=5

        *       
        *   *
*   *   *   *   * 
        *   *
        * 

*/

#include <iostream>
using namespace std;
int main(int agrc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, space, star, k = 1;                // k is used for keeping count of stars

    for (row = 1; row <= n / 2; row++)          // loop till half of the rows-1
    {

        for (space = 1; space <= n / 2; space++) // print the left space
            cout << "	";

        for (star = 1; star <= k; star++)        // print the stars
            cout << "*	";

        cout << endl;                            // move to next line

        k++;                                   
    }

    for (star = 1; star <= n; star++)            // print the middle row of stars
        cout << "*	";

    cout << endl;

    for (row = 1; row <= n / 2; row++)           // loop for printing after middle row
    {
        k--;

        for (space = 1; space <= n / 2; space++) // print the left space
            cout << "	";

        for (star = 1; star <= k; star++)        // print the stars
            cout << "*	";

        cout << endl;                           // move to next line
    }
}