#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size())
    {
        cout << "NO";
        return;
    }

    int xoor = 0;
    for (int i = 0; i < a.size(); i++)
    {
        xoor ^= (a[i] ^ b[i]);
    }

    if (xoor == 0)
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