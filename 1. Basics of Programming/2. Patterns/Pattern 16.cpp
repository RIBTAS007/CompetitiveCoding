/*

Question

1. You are given a number n.
2. You've to write code to print the pattern given in output format below

n=7

1												1	
1	2										2	1	
1	2	3								3	2	1	
1	2	3	4						4	3	2	1	
1	2	3	4	5				5	4	3	2	1	
1	2	3	4	5	6		6	5	4	3	2	1	
1	2	3	4	5	6	7	6	5	4	3	2	1	

*/

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, space, number;

    for (row = 1; row <= n; row++)
    {
        for (number = 1; number <= row; number++) // loop to print number series on left
        {
            cout << number << "	";
        }

        for (space = n - 1; space >= row; space--) // loop to print left half space
        {
            cout << "	";
        }

        for (space = n - 1; space > row; space--) // loop to print right half space
        {
            cout << "	";
        }

        for (number = row; number >= 1; number--) // loop to print number series on right
        {
            if (number != n)
                cout << number << "	";
        }

        cout << endl;                              // move to next line
    }
}