// Reverse an array
// Eg arr = { 3,1,2} 
// output = 2 1 3

#include <iostream>
using namespace std;

// Recursive approach O(n)

/* initailize two pointer from left and right 
   swap the value
   increase the left pointer, decrease the right pointer
   repeat the steps

   base case : when the right pointer bcomes less than left pointer
*/

void fun(int a[], int s, int e)
{
	if (s >= e) // base case
		return;

	int temp = a[s]; // swap values
	a[s] = a[e];
	a[e] = temp;

	fun(a, s + 1, e - 1); // recursive call
}

int main()
{

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) // taking input
	   cin >> a[i];
	

	// method 1 : we can use extra space.

	// method 2: swap ith with (n-i)th until we reach mid

	/*int i =0, j= n-1;
	while(i<j)
	{
	    int temp = a[i];
	    a[i]=a[j];
	    a[j] = temp;
	    i++;
	    j--;
	}
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" "; */

	// method 3: use the stack

	// method 4: recursive way

	int s = 0, e = n - 1;

	fun(a, s, e);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}
