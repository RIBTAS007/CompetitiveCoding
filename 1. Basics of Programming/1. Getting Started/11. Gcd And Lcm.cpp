/*

Question

1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
3. Take input "num1" and "num2" as the two numbers.
4. Print their GCD and LCM.

*/

#include <iostream>
using namespace std;

// function to calculate GCD of 2 numbers
int gcd(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);

    return gcd(b - a, a);
}

int main(int argc, char **argv)
{
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    cout << gcd(num1, num2) << endl;
    cout << num1 * num2 / gcd(num1, num2) << endl;
}

/*

NOTE :

METHOD 1:
for 250,30: Divide 250 with 30,29....1, the first divisible number will be the answer.

LCM * GCD = num1 *num2

METHOD 2:
while(b%a!=0)
{
    int rem = b%a;
    b=a;
    a=rem;
}

GCD is b.

*/