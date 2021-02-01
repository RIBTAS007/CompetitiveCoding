/*

Question

1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are given a number k.
4. Rotate the array a, k times to the right (for positive values of k), and to the left for negative values of k.

*/

#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void reverse(int a[], int i, int j)
{
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
}

void rotate(int a[], int n, int k)
{
    k = k % n;

    if (k < 0)
        k += n;

    reverse(a, 0, n - k - 1);

    reverse(a, n - k, n - 1);

    reverse(a, 0, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;

    rotate(a, n, k);
    display(a, n);

    return 0;
}

// NOTE: logic is to reverse left part, reverse right part, then reverse whole array to get the rotation.