/* 

Question

1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

n=5

*   
    *
        *
            *
                *


*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int r, space;

    for (r = 1; r <= n; r++)
    {
        for (space = 1; space < r; space++) //loop to print space on each row
            cout << "	";

        cout << "*	"; //loop to print stars on each row

        cout << endl; // move to next line
    }
}

// NOTE : We can also use row == col condition in a nested for loop to print the same pattern.