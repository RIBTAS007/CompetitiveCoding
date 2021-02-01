/* 

Question

1. You are given a number n.
2. You've to create a pattern as shown in output format.

n=5

0	
1	1	
2	3	5	
8	13	21	34	
55	89	144	233	377	

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int star, r, current_fib = 0, next_fib = 1, sum_fib;
    sum_fib = current_fib + next_fib;

    for (r = 1; r <= n; r++)
    {
        if (r == 1)
        {
           cout << current_fib;
        }   
        else if (r == 2)
        {
            sum_fib = current_fib + next_fib;
            cout << next_fib << "	" << sum_fib;
            current_fib = next_fib;
            next_fib = sum_fib;
        }
        else
        {
            for (star = 1; star <= r; star++)
            {
                sum_fib = current_fib + next_fib;
                cout << sum_fib << "	";
                current_fib = next_fib;
                next_fib = sum_fib;
            }
        }
        cout << endl;
    }
}

// NOTE : This is a combo of star pattern + fibonacci series