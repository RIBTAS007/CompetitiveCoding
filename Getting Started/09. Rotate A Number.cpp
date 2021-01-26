/*

Question

1. You are given two numbers n and k. You are required to rotate n, k times to the right. If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
2. Take as input n and k.
3. Print the rotated number.
4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
   n = 12340056
   k = 3
   r = 05612340

*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    //write your code here
    int num = n, len = 0;

    // calculate the length of number and store it in len variable.
    while (num)
    {
        num /= 10;
        len++;
    }

    //balance k, used when k>n.
    k %= len;

    // adjust negative k
    if (k < 0)
        k += len;

    int m, d, a, b;

    m = pow(10, len - k);
    d = pow(10, k);
    a = n / d;
    b = n % d;

    cout << (b * m) + a << endl;
}