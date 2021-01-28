/*

Question

1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers (1's and 0's), representing elements of 2d array a.
4. Consider this array a maze and a player enters from top-left corner in east direction.
5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.

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

    int i, j;

    int maze[n][m];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> maze[i][j];

    int player_direction = 0; // 0-e,1-s,2-w,3-n
    i = 0;
    j = 0;

    while (true)
    {
        player_direction = (player_direction + maze[i][j]) % 4; // if you take 4 right turns you will start moving in same direction

        if (player_direction == 0) // moving east (0,0)->(0,1) i.e. (i,j)->(i,j+1)
        {
            j++;
        }
        else if (player_direction == 1) // moving south (0,0)->(1,0) i.e. (i,j)->(i++,j)
        {
            i++;
        }
        else if (player_direction == 2) // moving west (0,0)->(0,-1) i.e. (i,j)->(i,j--)
        {
            j--;
        }
        else if (player_direction == 3) // moving north (0,0)->(-1,0) i.e. (i,j)->(i--,j)
        {
            i--;
        }
        // Now check if player exited from wall or not
        if (i < 0)
        {
            i++;
            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i == n)
        {
            i--;
            break;
        }
        else if (j == m)
        {
            j--;
            break;
        }
    }

    cout << i << "\n" // print the exit point
         << j;

    return 0;
}