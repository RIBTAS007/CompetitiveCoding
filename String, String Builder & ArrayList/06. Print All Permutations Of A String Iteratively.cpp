/*

Question

1. You are given a string. 
2. You have to print all permutations of the given string iteratively.

*/

#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;

    return (ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();

    long long int f;
    f = factorial(n);
    int i;

    for (long long int i = 0; i < f; i++)
    {
        string ans = s;

        int temp = i;

        for (int div = n; div >= 1; div--)
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