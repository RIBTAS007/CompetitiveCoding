/*

Question

1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print the elements of array from beginning to end each in a separate line.
4. For the above purpose complete the body of displayArr function. Don't change the signature.

Note -> Write recursive and not iterative logic. 

*/

#include <iostream>
using namespace std;

void display(int arr[], int idx, int n)
{
    // write your code here
    if (n == 0) // base case
        return;
    cout << arr[idx] << endl;
    display(arr, idx + 1, n - 1); // recursive call 
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}
