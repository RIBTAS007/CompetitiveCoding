/*

Question

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    int max = INT_MIN, min = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << max - min << endl;
    return 0;
}