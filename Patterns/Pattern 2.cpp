/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

*   *   *   *   *
*   *   *   *
*   *   *
*   *
*

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int row, star;
    for (row = n; row >= 1; row--) // iterate n times once for each row from n to 1
    {
        for (star = row; star >= 1; star--) // print stars == row number
        {
            cout << "*	";
        }
        cout << endl; // move to next line
    }
}