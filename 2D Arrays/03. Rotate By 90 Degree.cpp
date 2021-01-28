/*

Question

1. You are given a number n, representing the number of rows and number of columns.
2. You are given n*n numbers, representing elements of 2d array a.
3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
*Note - you are required to do it in-place i.e. no extra space should be used to achieve it .*

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int i, j;
    int a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++)          // first we will transpose the 2D array by swapping lower triangle elements with upper triangle elements
        for (j = i; j < n; j++)      // j=i will only access the upper triangle elements
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }

    for (i = 0; i < n; i++)        // in this we will reverse the order of columns of the transposed 2D array
    {
        int l = 0, r = n - 1;      // l points to leftmost column , r points to rightmost column.

        while (l < r)
        {
            int temp = a[i][l];
            a[i][l] = a[i][r];
            a[i][r] = temp;
            l++;
            r--;
        }
    }

    for (i = 0; i < n; i++)            // code to print the 2D array
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}