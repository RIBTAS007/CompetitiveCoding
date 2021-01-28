/*

Question

You are given a n*m matrix where n are the number of rows and m are the number of columns. You are also given n*m numbers representing the elements of the matrix.
You will be given a ring number 's' representing the ring of the matrix. 

Input:

5
7
11 12 13 14 15 16 17
21 22 23 24 25 26 27
31 32 33 34 35 36 37
41 42 43 44 45 46 47
51 52 53 54 55 56 57
2
3

Output:

11 12 13 14 15 16 17
21 25 26 36 46 45 27
31 24 33 34 35 44 37
41 23 22 32 42 43 47
51 52 53 54 55 56 57

*/

#include <bits/stdc++.h>
using namespace std;

void display(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " "; //printing each element of array
        }
        cout << "
                ";
    }
}

void fillShellFromOneD(int **arr, int s, int oned[], int n, int m)
{
    int minr = s - 1;
    int minc = s - 1;
    int maxr = n - s;
    int maxc = m - s;

    int i, j, c = 0;
    // lw

    for (i = minr, j = minc; i <= maxr; i++)
    {
        arr[i][j] = oned[c];
        c++;
    }

    // bw
    for (i = maxr, j = minc + 1; j <= maxc; j++)
    {
        arr[i][j] = oned[c];
        c++;
    }
    //rw
    for (i = maxr - 1, j = maxc; i >= minr; i--)
    {
        arr[i][j] = oned[c];
        c++;
    }
    //tw
    for (i = minr, j = maxc - 1; j >= minc + 1; j--)
    {
        arr[i][j] = oned[c];
        c++;
    }
}

int *fillOneDfromShell(int **arr, int s, int n, int m)
{
    int minr = s - 1;
    int minc = s - 1;
    int maxr = n - s;
    int maxc = m - s;
    int sz = 2 * (maxr - minr + maxc - minc);

    int *oned = new int[sz];
    int i, j, c = 0;
    // lw

    for (i = minr, j = minc; i <= maxr; i++)
    {
        oned[c] = arr[i][j];
        c++;
    }

    // bw
    for (i = maxr, j = minc + 1; j <= maxc; j++)
    {
        oned[c] = arr[i][j];
        c++;
    }
    //rw
    for (i = maxr - 1, j = maxc; i >= minr; i--)
    {
        oned[c] = arr[i][j];
        c++;
    }
    //tw
    for (i = minr, j = maxc - 1; j >= minc + 1; j--)
    {
        oned[c] = arr[i][j];
        c++;
    }
    return oned;
}

void reverse(int arr[], int li, int ri)
{
    while (li < ri)
    {
        int t = arr[li];
        arr[li] = arr[ri];
        arr[ri] = t;

        li++;
        ri--;
    }
}

void rotate(int oned[], int r, int sz)
{
    int len = sz;
    r = r % len;
    if (r < 0)
    {
        r = r + len;
    }
    reverse(oned, 0, len - r - 1);
    reverse(oned, len - r, len - 1);
    reverse(oned, 0, len - 1);
}

void rotateShell(int **arr, int s, int r, int n, int m)
{
    int *p = fillOneDfromShell(arr, s, n, m);

    int minr = s - 1; 
    int minc = s - 1;
    int maxr = n - s;
    int maxc = m - s;
    int sz = 2 * (maxr - minr + maxc - minc); 

    int oned[sz];

    for (int i = 0; i < sz; i++)
    {
        oned[i] = p[i];
    }

    rotate(oned, r, sz);
    fillShellFromOneD(arr, s, oned, n, m);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, i, j;
    cin >> n; // n=5 , m=5
    cin >> m;

    int **arr = new int *[n];

    for (i = 0; i < n; i++)
        arr[i] = new int[m];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> arr[i][j];

    int s, r;
    cin >> s >> r;

    rotateShell(arr, s, r, n, m);

    display(arr, n, m);

    return 0;
}