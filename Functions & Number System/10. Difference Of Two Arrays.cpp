/* 

Questions

1. You are given a number n1, representing the size of array a1.
2. You are given n1 numbers, representing elements of array a1.
3. You are given a number n2, representing the size of array a2.
4. You are given n2 numbers, representing elements of array a2.
5. The two arrays represent digits of two numbers.
6. You are required to find the difference of two numbers represented by two arrays and print the arrays. a2 - a1

Assumption - number represented by a2 is greater.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1;
    cin >> n1;

    int a1[n1];
    for (int i = 0; i < n1; i++)
        cin >> a1[i];

    int n2;
    cin >> n2;

    int a2[n2];
    for (int i = 0; i < n2; i++)
        cin >> a2[i];

    int k = n2;
    int diff[k];

    int i = n1 - 1;
    int j = n2 - 1;
    k = n2 - 1;
    int c = 0, p = 0;

    while (k >= 0)
    {
        int d = 0;
        int a1v = (i >= 0) ? a1[i] : 0;     // alv becomes 0 when digits are over in smaller number
        if (a2[j] + c >= a1v)               // carry not required
        {
            d = a2[j] + c - a1v;
            c = 0;
        }
        else                                // carry is required
        {
            d = a2[j] + c + 10 - a1v;
            c = -1;
        }

        diff[k] = d;
        i--;
        j--;
        k--;
        p++;
    }

    int idx = 0;
    while (idx < p)             // loopt to eleiminate starting 0s
    {
        if (diff[idx] == 0)
        {
            idx++;
        }
        else
            break;
    }

    while (idx < p)
    {
        cout << diff[idx] << endl;
        idx++;
    }

    return 0;
}