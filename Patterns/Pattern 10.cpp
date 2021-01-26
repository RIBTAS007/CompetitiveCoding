/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

        *
    *       *
*               *
    *       *
        * 


*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int r, leftspace, midspace, k = 1;

    // Code to print stars till first half of rows
    for (r = 1; r <= n / 2 + 1; r++)
    {
        for (leftspace = n / 2; leftspace >= r; leftspace--)
            cout << "	";

        cout << "*	";

        if (r > 1)
        {
            for (midspace = 1; midspace <= k; midspace++)
                cout << "	";
            
            k += 2;
            
            cout << "*	";
        }

        cout << endl;
    }
    
    // Code to print stars after first half of rows
    k -= 4;
    for (r = 1; r <= n / 2; r++)
    {

        for (leftspace = 1; leftspace <= r; leftspace++)
            cout << "	";

        cout << "*	";

        for (midspace = 1; midspace <= k; midspace++)
            cout << "	";
        
        k -= 2;

        if (r < n / 2)
            cout << "*	";

        cout << endl;
    }
}