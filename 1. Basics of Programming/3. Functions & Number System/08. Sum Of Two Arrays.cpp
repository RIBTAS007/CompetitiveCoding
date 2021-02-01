/*

Question

1. You are given a number n1, representing the size of array a1.
2. You are given n1 numbers, representing elements of array a1.
3. You are given a number n2, representing the size of array a2.
4. You are given n2 numbers, representing elements of array a2.
5. The two arrays represent digits of two numbers.
6. You are required to add the numbers represented by two arrays and print the arrays.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, i, j, k;

    cin >> n1;
    int a1[n1];

    for (i = 0; i < n1; i++)
        cin >> a1[i];

    int n2;

    cin >> n2;
    int a2[n2];

    for (i = 0; i < n2; i++)
        cin >> a2[i];

    int sum[n1 > n2 ? n1 : n2];
    int carry = 0;

    i = n1 - 1;
    j = n2 - 1;
    k = (n1 > n2 ? n1 : n2) -1;
    
    while (k >= 0)
    {
        int digit = carry;

        if (i >= 0)
            digit += a1[i];

        if (j >= 0)
            digit += a2[j];

        carry = digit / 10;
        digit = digit % 10;
        sum[k] = digit;

        i--;
        j--;
        k--;
    }

    if (carry > 0)
        cout << carry << endl;

    for (int d : sum)
        cout << d << endl;

    return 0;
}