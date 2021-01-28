/*
Question

1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to reverse the contents of array a.

*/

#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void reverse(int a[], int n)
{
    int i = 0;
    n--;
    while (i <= n)
    {
        int temp = a[i];
        a[i] = a[n];
        a[n] = temp;
        i++;
        n--;
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

    reverse(a, n);
    display(a, n);

    return 0;
}