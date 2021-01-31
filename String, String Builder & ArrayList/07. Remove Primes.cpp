/*

Question

1. You are given an ArrayList of positive integers.
2. You have to remove prime numbers from the given ArrayList and return the updated ArrayList.

Note -> The order of elements should remain same.

*/

#include <bits/stdc++.h>
using namespace std;

bool isprime(int val)
{
    int i;
    if (val == 1)
        return true;
    for (i = 2; i < val; i++)
    {
        if (val % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }

    for (auto i = v.begin(); i != v.end(); ++i)
    {
        if (isprime(*i))
        {
            v.erase(i);
            i--;
            n--;
        }
    }

    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
        if (i < n - 1 && n > 1)
            cout << ", ";
    }
    cout << "]";

    return 0;
}