/*

Question

1. You are given a positive number n. 
2. You are required to print the counting from n to 1.
3. You are required to not use any loops. 

*/

#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    if (n == 0) // base case
        return 1;
    cout << n << endl;      // print the current n value
    printDecreasing(n - 1); // recursive call to print the next value i.e. n-1
}

int main()
{
    int n;
    cin >> n;
    printDecreasing(n);
}