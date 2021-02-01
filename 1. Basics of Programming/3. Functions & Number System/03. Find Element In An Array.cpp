/*

Question

1.You are given a number n, representing the size of array a.
2.You are given n numbers, representing elements of array a.
3.You are given another number d.
4.You are required to check if d number exists in the array a and at what index (0 based). If found print the index, otherwise print -1.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, val;
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> val;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
    return 0;
}