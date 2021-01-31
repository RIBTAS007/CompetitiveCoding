/*

Questions

1. You are given a string that contains only lowercase and uppercase alphabets. 
2. You have to form a string that contains the difference of ASCII values of every two consecutive characters between those characters.
   For "abecd", the answer should be "a1b3e-2c1d", as 
   'b'-'a' = 1
   'e'-'b' = 3
   'c'-'e' = -2
   'd'-'c' = 1

*/

#include <bits/stdc++.h>
using namespace std;

void difference(string s)
{
    int n = s.length();
    int i;
    string ans = "";
    ans = ans + s[0];

    for (i = 1; i < n; i++)
    {
        char curr = s[i];
        char prev = s[i - 1];

        int diff = curr - prev;

        ans = ans + to_string(diff) + curr;
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    difference(s);
    return 0;
}