/*
1. You've to display the digits of a number.
2. Take as input "n", the number for which digits have to be displayed.
3. Print the digits of the number line-wise.

*/
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int c=0,t=n;
    while(t)     // loop till t does not becomes 0
    {
        t/=10;
        c++;      // count the digits
    }
    
    int div =1;   
    c--;
    
    while(c--)    // div = 10^(c-1)
    {
        div*=10;
    }
    
    while(div)    // loop till div does not becomes 0
    {
        cout<<n/div<<endl;
        n= n%div;
        div/=10;
    }
    
}
