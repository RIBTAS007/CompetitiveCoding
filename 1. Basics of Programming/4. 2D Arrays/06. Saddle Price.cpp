/*

Question

1. You are given a square matrix of size 'n'. You are given n*n elements of the square matrix. 
2. You are required to find the saddle price of the given matrix and print the saddle price. 
3. The saddle price is defined as the least price in the row but the maximum price in the column of the matrix.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a[n][n];
    int i, j;
    bool flag = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }

    int sjval = 0;
    for (i = 0; i < n; i++)
    {
        sjval = 0;

        for (j = 0; j < n; j++) // loop to find max price in the column
        {
            if (a[i][sjval] > a[i][j])
            {
                sjval = j;
            }
        }

        flag = true;

        for (int k = 0; k < n; k++) // loop to check whether the max price found above is min in its row or not
        {
            if (a[k][sjval] > a[i][sjval])
                flag = false;
        }

        if (flag == true) // print if it satisfies the condition of saddle point
        {
            cout << a[i][sjval] << endl;
            return 0;
        }
    }

    cout << "Invalid input" << endl;
    return 0;
}