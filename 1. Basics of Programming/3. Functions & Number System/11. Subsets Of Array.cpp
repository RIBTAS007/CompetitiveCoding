/*

Question

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to print all subsets of arr. Each subset should be
on separate line. 

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int limit = pow(2, n);  // this value will be power set i.e 2^n

    for (int i = 0; i < limit; i++)
    {
        string set = "";
        int t = i;
        // in each iteration we will convert i to binary and check its 0 and 1s and print corresponding values.
        for (int j = n - 1; j >= 0; j--)
        {
            int r = t % 2;
            t = t / 2;
            if (r == 0)
            {
                set = "-	" + set;
            }
            else
            {
                set = to_string(arr[j]) + "	" + set;
            }
        }
        cout << set << endl;
    }

    return 0;
}