/* 

Question

1. You are given a number n.
2. You've to create a pattern as shown in output format.

n=5

1	
1	1	
1	2	1	
1	3	3	1	
1	4	6	4	1	

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int i, j;
    for (i = 0; i < n; i++)
    {
        int iCj = 1;
        for (j = 0; j <= i; j++)
        {
            cout << iCj << "	";
            int iCjp1 = iCj * (i - j) / (j + 1);
            iCj = iCjp1;
        }

        cout << endl;
    }
}

// NOTE : nC_k+1 = nC_k * (n-k)/(j+1)