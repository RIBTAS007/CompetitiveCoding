/*

Question

1. You are given a positive number n. 
2. You are required to print the counting from n to 1 and back to n again.
3. You are required to not use any loops. 

*/

#include <iostream>
using namespace std;

void printIncDec(int n)
{

    if (n == 0) // base case
        return;

    cout << n << endl;  // to print the decreasing sequence
    printIncDec(n - 1); // recursive call
    cout << n << endl;  // code to print the increasing sequence
}

int main()
{
    int n;
    cin >> n;
    printIncDec(n);
}