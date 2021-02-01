/*

Question

1. You are given a number n, representing the number of rows and columns of a square matrix.
2. You are given n * n numbers, representing elements of 2d array a. 
Note - Each row and column is sorted in increasing order.
3. You are given a number x.
4. You are required to find x in the matrix and print it's location int (row, col) format as discussed in output format below.
5. In case element is not found, print "Not Found".

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n][n];
    int i, j, flag = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> arr[i][j];

    int x;
    cin >> x;

    i = 0;
    j = n - 1;

    while (i < n && j >= 0)    // Start searching from top-right corner
    {
        int val = arr[i][j];
        if (val > x)           // if value to find is lesser than value at (i,j) move left
        {
            j--;
        }
        else if (val < x)     // if value to find is greater than value at (i,j) move down
        {
            i++;
        }
        else                  // if value not found then exit        
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Not Found" << endl;
    else
        cout << i << "
                     "<<j<<endl;

            return 0;
}