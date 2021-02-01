/*

Question

1. You are required to check if a given set of numbers is a valid pythagorean triplet.
2. Take as input three numbers a, b and c.
3. Print true if they can form a pythagorean triplet and false otherwise.

*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    cin >> a >> b >> c;

    //write your code here

    int a_sq, b_sq, c_sq;

    a_sq = a * a;
    b_sq = b * b;
    c_sq = c * c;

    if (((a_sq + b_sq) == c_sq) || ((b_sq + c_sq) == a_sq) || ((a_sq + c_sq) == b_sq))
        cout << "true";
    else
        cout << "false";

    return 0;
}