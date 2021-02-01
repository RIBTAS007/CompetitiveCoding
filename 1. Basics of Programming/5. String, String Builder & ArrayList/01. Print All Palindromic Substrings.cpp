/* 

Question

1. You are given a string. 
2. You have to print all palindromic substrings of the given string.

*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int left = 0, right = str.length() - 1;
    while (left < right)
    {
        if (str.at(left) != str.at(right))
            return false;
        left++;
        right--;
    }

    return true;
}

void solution(string str)
{
    int start, lenth;
    int len = str.length();

    for (start = 0; start < len; start++)
    {
        for (lenth = 1; lenth <= len - start; lenth++) 
        {
            string v = str.substr(start, lenth);  // substr prints from start till start+length.
            if (isPalindrome(v))
            {
                cout << v << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    cin >> s;

    solution(s);

    return 0;
}