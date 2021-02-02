/*

Question

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the maximum of input. 
4. For the purpose complete the body of maxOfArray function. Don't change the signature.

Note -> Write recursive and not iterative logic.

*/

#include <iostream>
using namespace std;

int max(int arr[], int idx, int n)
{
    // write your code here
    if (n == 0)
        return arr[0];
    else
    {
        int m = max(arr, idx + 1, n - 1);    // Assume that you get the max value from remaining elements
        return (arr[idx] > m) ? arr[idx] : m; // check if the current value is greater than remaining elements or not.
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}