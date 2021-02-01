/*

Question

1. You've to display the digits of a number.
2. Take as input "n", the number for which digits have to be displayed.
3. Print the digits of the number line-wise.

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int c = 0, num = n;
    while (num)             // loop till t does not becomes 0
    {
        num /= 10;
        c++;                // count the digits
    }

    int divisor = 1;

    c--;

    while (c--)            // divisor = 10^(c-1)
    {
        divisor *= 10;
    }

    while (divisor)                        // loop till divisor does not becomes 0
    {                                     // loop 1st     ,  loop 2nd , loop 3rd
        cout << n / divisor << endl;      // 123/100 = 1  ,  23/10 = 2, 2/1 =2
        n = n % divisor;                  // n =23        ,  3        , 3
        divisor /= 10;                    // divisor = 10 ,  1        , 0
    }
}
