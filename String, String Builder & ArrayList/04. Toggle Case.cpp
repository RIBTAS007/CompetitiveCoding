/*

Questions

1. You are given a string that contains only lowercase and uppercase alphabets. 
2. You have to toggle the case of every character of the given string.

*/

#include <bits/stdc++.h>
using namespace std;

void toggle(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    toggle(s);
    return 0;
}