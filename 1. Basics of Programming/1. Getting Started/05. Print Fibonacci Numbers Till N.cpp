/*
Question

1. You've to print first n fibonacci numbers.
2. Take as input "n", the count of fibonacci numbers to print.
3. Print first n fibonacci numbers.

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int current_fib=0,next_fib=1;

    cout<<current_fib<<endl; // 1st fib
    cout<<next_fib<<endl;    // 2nd fib

    for(int i=2;i<n;i++)
    {
        
        int sum_fib = current_fib + next_fib; 
        cout<<sum_fib<<endl; // sum of fib numbers
        
        // update current_fib and next_fib as they move 1 step forward in series
        current_fib=next_fib;
        next_fib=sum_fib;
    }
    
}