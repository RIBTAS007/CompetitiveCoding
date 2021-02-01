/*

Question

1. You are given a positive number n. 
2. You are required to print the counting from 1 to n.
3. You are required to not use any loops. 

*/

#include <iostream>
using namespace std;

void printIncreasing(int n)
{

    if (n == 0) // base ecase
        return;
    printIncreasing(n - 1); // first go to previous value i.e. n-1
    cout << n << endl;      // then print that n
}

int main()
{
    int n;
    cin >> n;
    printIncreasing(n);
}