/* 

Question

1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a.
4. You are required to traverse and print the contents of the 2d array in form of a spiral.
Note - Please check the sample output for details.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int m;
    cin >> m;

    int a[n][m];
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }

    int minr = 0;
    int minc = 0;
    int maxr = n - 1;
    int maxc = m - 1;

    int total_elements = n * m;
    int count_of_element = 0;

    while (count_of_element < total_elements)
    {
        //left wall

        for (int i = minr, j = minc; i <= maxr && count_of_element < total_elements; i++)
        {
            cout << a[i][j] << endl;
            count_of_element++;
        }
        minc++;

        //bottom wall
        for (int i = maxr, j = minc; j <= maxc && count_of_element < total_elements; j++)
        {
            cout << a[i][j] << endl;
            count_of_element++;
        }
        maxr--;

        //right wall
        for (int i = maxr, j = maxc; i >= minr && count_of_element < total_elements; i--)
        {
            cout << a[i][j] << endl;
            count_of_element++;
        }
        maxc--;
        //top wall

        for (int i = minr, j = maxc; j >= minc && count_of_element < total_elements; j--)
        {
            cout << a[i][j] << endl;
            count_of_element++;
        }
        minr++;
    }

    return 0;
}