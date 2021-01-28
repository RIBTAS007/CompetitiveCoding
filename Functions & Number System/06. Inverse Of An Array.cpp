/*

Question

1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to calculate the inverse of array a

*/

#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}

void inverse(int a[], int n)
{
    int i = 0, c = 0, t = 0;

    int inv[n];

    for (i = 0; i < n; i++)
    {
        inv[a[i]] = i;
    }

    for (i = 0; i < n; i++)
    {
        a[i] = inv[i];
    }
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

    inverse(a, n);
    display(a, n);

    return 0;
}