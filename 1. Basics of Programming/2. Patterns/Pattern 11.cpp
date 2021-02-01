/* 

Question

1. You are given a number n.
2. You've to create a pattern as shown in output format.

n=5

1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    int row, col, value = 1;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {

            cout << value << "	";
            value++;
        }

        cout << endl;
    }
}