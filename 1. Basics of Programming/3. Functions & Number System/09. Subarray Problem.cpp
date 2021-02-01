/*

Question

1. You are given an array of size 'n' and n elements of the same array.
2. You are required to find and print all the subarrays of the given array. 
3. Each subarray should be space seperated and on a seperate lines. 

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i, j, k;

    for (i = 0; i < n; i++)            // i will point to start of subarray
    {
        for (j = i; j < n; j++)        // j will point to end of subarray
        {
            for (k = i; k <= j; k++)   // k iterates the subarray from i to j
            {
                cout << a[k] << "	";
            }
            cout << endl;
        }
    }
    return 0;
}