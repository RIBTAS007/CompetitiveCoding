/*
1. You've to count the number of digits in a number.
2. Take as input "n", the number for which the digits has to be counted.
3. Print the digits in that number.
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int c=0;
    while(n)     // loop till n does not becomes 0
    {
        n /=10;  // keep dividing it by 10 so remove a digit from last
        c++;     // update the count
    }
    cout<<c<<endl;
}