/*
Question

1. You've to print all prime numbers between a range. 
2. Take as input "low", the lower limit of range.
3. Take as input "high", the higher limit of range.
4. For the range print all the primes numbers between low and high (both included).

*/

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int low, high;
    cin >> low;
    cin >> high;

    //write your code here
    
    for (int i = low; i <= high; i++)
    {
        int j, f = 0;

        //check if ith number is prime or not
        for (j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                f = 1;
                break;
            }

        // print if its prime
        if (f == 0)
            cout << i << endl;
    }
}