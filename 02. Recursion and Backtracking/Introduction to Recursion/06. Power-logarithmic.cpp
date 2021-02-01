/*

Question

1. You are given a number x.
2. You are given another number n.
3. You are required to calculate x raised to the power n. Don't change the signature of power function.

Note1 -> The previous version expects the call stack to be of n height. This function expects call function to be only log(n). 

*/

#include <iostream>
using namespace std;

int powerLogarithmic(int x, int n)
{
    if (n == 0)          // base case
    {
        return 1;
    }

    int xToThePowerNBy2 = powerLogarithmic(x, n / 2); // recursive call with n decreasing each time by 2.
    int ans = xToThePowerNBy2 * xToThePowerNBy2;                    

    if (n % 2 == 1)       // we multiply x one more time if n is odd.
    {
        ans = ans * x;
    }

    return ans;          // return the answer
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powerLogarithmic(x, n);
}