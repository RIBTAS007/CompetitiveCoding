/*

Question

1. You are given a number n.
2. You are required to calculate the factorial of the number. 

*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0) // base case
        return 1;
    else
        return n * factorial(n - 1); // expected result and faith is that we already know factorial of n-1.
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}