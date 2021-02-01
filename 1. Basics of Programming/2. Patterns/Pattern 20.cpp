/*

Question

1. You are given a number n.
2. You've to write code to print the pattern given in output format below

n=5

*				*	
*				*	
*		*		*	
*	*		*	*	
*				*	

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
            if (col == 1 || col == n || (col > n / 2 && (row == col)) || (row > n / 2 && row + col == n + 1))
                cout << "*	";
            else
                cout << "	";
        }

        cout << endl;
    }
}