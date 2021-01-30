/* 

Question

1. You are given a string. 
2. You have to compress the given string in the following two ways - 
   First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
   For "aaabbccdee", the compressed string will be "abcde".
   Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
   For "aaabbccdee", the compressed string will be "a3b2c2de2".

*/

#include <bits/stdc++.h>
using namespace std;

void compression1(string s)
{
    string ans = "";
    ans = ans + s.at(0);
   
    for (int i = 1; i < s.length(); i++)
    {
        char curr_val = s.at(i);
        char prev_val = s.at(i - 1);
        if (prev_val != curr_val)
            ans = ans + curr_val;
    }

    cout << ans << endl;
}

void compression2(string s)
{
    string ans = "";
    ans = ans + s.at(0);
    int count = 1;
    
    for (int i = 1; i < s.length(); i++)
    {
        char curr_val = s.at(i);
        char prev_val = s.at(i - 1);
        if (prev_val != curr_val)   // if the values are not same means current is different.
        {
            if (count > 1)          // hence we check the count value and add it to the string
            {
                ans = ans + to_string(count);
                count = 1;
            }

            ans = ans + curr_val;  // add the new character to answer
        }
        else
        {
            count++;               // else just keeping skiping duplicate strings and keep updating the count.
        }
    }

    if (count > 1)
    {
        ans = ans + to_string(count); // add the count of last char if its count >1
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    compression1(s);
    compression2(s);
    return 0;
}