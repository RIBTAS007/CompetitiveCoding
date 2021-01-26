/* 

Question

1. You are given a number n.
2. You've to create a pattern as shown in output format.

n=5

    	1	
	2	3	2	
3	4	5	4	3	
	2	3	2	
		1	

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, leftspace, rs, star;

    // Code to print till 1st half of rows

    int k = 1, x, y = 0;

    for (row = 1; row <= n / 2 + 1; row++)
    {
        x = row;
        for (leftspace = n / 2; leftspace >= row; leftspace--)
            cout << "	";

        for (star = 1; star <= k; star++)
            if (star <= k / 2 + 1)
            {
                cout << x + star - 1 << "	";
                y = x + star - 2;
            }
            else
            {
                cout << y-- << "	";
            }

        k = k + 2;
        x++;
        cout << endl;
    }
    
    // Code to print after 1st half of rows

    k = n - 2;
    x--;

    for (row = 1; row <= n / 2; row++)
    {
        x--;
        for (leftspace = 1; leftspace <= row; leftspace++)
            cout << "	";

        for (star = 1; star <= k; star++)
            if (star <= k / 2 + 1)
            {
                cout << x + star - 1 << "	";
                y = x + star - 2;
            }
            else
            {
                cout << y-- << "	";
            }

        k = k - 2;

        cout << endl;
    }
}