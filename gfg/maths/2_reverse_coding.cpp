/* 
 *
 *      Reverse Coding https://practice.geeksforgeeks.org/problems/reverse-coding/0
 * 
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long inp, out;
    cin >> inp >> out;
    long long pattern = (inp * (inp + 1)) / 2;

    if (pattern == out)
    {
        cout << 1;
    }
    else
        cout << 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}