/* 

Question

1. You are given a string. 
2. You have to print all permutations of the given string iteratively.

*/

#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n)
{
    int fact = 1;
    for (int num = 1; num <= n; num++)
        fact = fact * num;

    return (fact);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int n = str.length();

    long long int fact;
    fact = factorial(n);
    int i;

    for (long long int i = 0; i < fact; i++)  // loop will iterate for n! times 
    {
        string ans = str; 

        int temp = i;

        for (int div = n; div >= 1; div--)  // tag the characters with natural numbers from 0 to n
        {
            int q = temp / div;             
            int r = temp % div;
            cout << ans.at(r);
            ans.erase(ans.begin() + r);
            temp = q;
        }

        cout << endl;
    }
    return 0;
}