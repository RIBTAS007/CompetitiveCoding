/*

Question

1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print a bar chart representing value of arr a.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, floor, height;
    cin >> n;

    int Building[n];

    for (floor = 0; floor < n; floor++)
        cin >> Building[floor];

    int max = 0;
    for (floor = 0; floor < n; floor++)
    {
        if (max < Building[floor])
            max = Building[floor];
    }

    for (floor = max; floor >= 1; floor--)
    {
        for (height = 0; height < n; height++)
        {
            if (floor <= Building[height])
                cout << "*	";
            else
                cout << "	";
        }
        cout << endl;
    }

    return 0;
}