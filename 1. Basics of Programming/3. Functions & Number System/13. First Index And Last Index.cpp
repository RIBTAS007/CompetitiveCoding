/*

Question

1. You are given a number n, representing the size of array a.
2. A number d.
2. You need to print the index of first occurence an dlast occurence of the given number d.

Asssumption - Array is sorted. Array may have duplicate values.d exists in array.

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
    int d;
    cin >> d;
    int c = 0, fi = -1, li = 0, ri = n - 1;

    while (li <= ri)
    {
        int mid = (li + ri) / 2;

        if (d < arr[mid])
        {
            ri = mid - 1;
        }

        else if (d > arr[mid])
        {
            li = mid + 1;
        }
        else
        {
            fi = mid;

            ri = mid - 1;
        }
    }

    cout << fi << endl;

    c = 0, fi = -1, li = 0, ri = n - 1;

    while (li <= ri)
    {
        int mid = (li + ri) / 2;

        if (d < arr[mid])
        {
            ri = mid - 1;
        }

        else if (d > arr[mid])
        {
            li = mid + 1;
        }
        else
        {
            fi = mid;

            li = mid + 1;
        }
    }

    cout << fi << endl;

    return 0;
}

// NOTE: Its basically little modification of binary search