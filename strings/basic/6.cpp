// Write a program to check whether given two strings are anagram or not.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string a, b;
    cin >> a >> b;
    int arr[256] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        arr[b[i]]--;
        if (arr[b[i]] < 0)
        {
            cout << "NO";
            return;
        }
    }

    int sum = 0;
    for (int i = 0; i < 256; i++)
    {
        sum += arr[i];
    }

    if (sum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}