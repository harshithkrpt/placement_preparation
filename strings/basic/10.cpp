// palindrome
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string str;
    int n;
    cin >> n;
    cin >> str;
    string temp = str;
    reverse(str.begin(), str.end());
    if (temp == str)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
