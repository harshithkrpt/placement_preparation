/*
 * Triangular Numbers https://practice.geeksforgeeks.org/problems/triangular-number/0
 *  
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long i = sqrt(2 * n);

    if (i * (i + 1) == 2 * n)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
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