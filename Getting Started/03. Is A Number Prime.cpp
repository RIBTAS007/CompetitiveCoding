/*
Question

1. You've to check whether a given number is prime or not.
2. Take a number "t" as input representing count of input numbers to be tested.
3. Take a number "n" as input "t" number of times.
4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.

*/

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, f = 0;
        cin >> n;
        for (i = 2; i * i <= n; i++) // loop runs till i<sqrt(n)
        {
            if (n % i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 1)
            cout << "not prime" << endl;
        else
            cout << "prime" << endl;
    }