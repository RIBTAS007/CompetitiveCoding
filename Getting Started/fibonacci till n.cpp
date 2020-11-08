/*
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
    int p=0,q=1;
    cout<<p<<endl; // 1st fib
    cout<<q<<endl; // 2nd fib
    for(int i=2;i<n;i++)
    {
        cout<<p+q<<endl; // next fib
        int t = p+q;       
        // update p and q st they move 1 step forward in series
        p=q;
        q=t;
    }
    
}