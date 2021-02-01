/*

Question

1. You are given a number n.
2. You've to write code to print the pattern given in output format below

n=7

*   *	*	*	*	*	*	
	*				*	
		*		*	
			*	
		*	*	*	
	*	*	*	*	*	
*	*	*	*	*	*	*	

*/

#include <iostream>
using namespace std;
int main(int agrc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, space, star;

    int k = n - 4;

    for (star = 1; star <= n; star++) // print the first row
        cout << "*	";

    cout << endl; // move to next line

    for (row = 2; row <= n / 2; row++) // loop till row before the middle one
    {
        for (space = 1; space < row; space++) // loop to print left space
            cout << "	";

        cout << "*	";

        for (space = 1; space <= k; space++) // loop to print mid space
            cout << "	";

        cout << "*	";

        cout << endl;

        k -= 2;
    }

    k = 1;

    for (row = n / 2 + 1; row <= n; row++) // loop from the middle row till n
    {
        for (space = n; space > row; space--)
            cout << "	";

        for (star = 1; star <= k; star++)
            cout << "*	";

        cout << endl;

        k += 2;
    }
}