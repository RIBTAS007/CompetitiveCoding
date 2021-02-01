/*

Question

1. You are given a number n1, representing the number of rows of 1st matrix.
2. You are given a number m1, representing the number of columns of 1st matrix.
3. You are given n1*m1 numbers, representing elements of 2d array a1.
4. You are given a number n2, representing the number of rows of 2nd matrix.
5. You are given a number m2, representing the number of columns of 2nd matrix.
6. You are given n2*m2 numbers, representing elements of 2d array a2.
7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied, display the contents of prd array as specified in output Format.
8. If the two arrays can't be multiplied, print "Invalid input".

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r1, c1;
    cin >> r1;
    cin >> c1;

    int matrix1[r1][c1];
    int i, j;

    for (i = 0; i < r1; i++)           // taken input of matrix1
        for (j = 0; j < c1; j++)
            cin >> matrix1[i][j];

    int r2, c2;
    cin >> r2;
    cin >> c2;

    int matrix2[r2][c2];

    for (i = 0; i < r2; i++)           // taken input of matrix2
        for (j = 0; j < c2; j++)
            cin >> matrix2[i][j];

    int ans[r1][c2];                  // matrix that we will get after multiplication

    if (c1 != r2)                     // r1*c1 , r2*c2 , if c1!=r2 then we can't multiply                
    {
        cout << "Invalid input" << endl;
        return 0;
    }

    for (i = 0; i < r1; i++)         // initialized all elements of matrix ans to 0
        for (j = 0; j < c2; j++)
            ans[i][j] = 0;
    
    for (i = 0; i < r1; i++)         // loop to multiply the matrices
    {
        for (j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)          // k can also run till r2 since c1 =r2
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++)             // loop to display the matrix "ans"
    {
        for (j = 0; j < c2; j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}