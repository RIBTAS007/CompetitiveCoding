/*

Question

1. You are required to display the prime factorization of a number.
2. Take as input a number n.
3. Print all its prime factors from smallest to largest.

*/

#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int i = 2;

    while (n != 1)            // loop till number does not becomes 1
    {
        if (n % i == 0)       // if the number is divisble by i
        {
            cout << i << " "; // print i since it will be a prime factor
            n /= i;           // remove the factor i from the number
        }
        else                  // else increment i and check with it.
        {
            i++;         
        }
    }
}