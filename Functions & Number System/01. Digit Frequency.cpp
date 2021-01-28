/*

Question

1. You are given a number n.
2. You are given a digit d.
3. You are required to calculate the frequency of digit d in number n.

*/

#include <bits/stdc++.h>
using namespace std;

int getDigitFrequency(int n, int d)
{
    // write code here
    int c = 0;
    while (n != 0)
    {
        if (n % 10 == d)
            c++;
        n /= 10;
    }

    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int d;
    cin >> d;

    int f = getDigitFrequency(n, d);

    cout << f << endl;

    return 0;
}