// F ind common elements in three sorted arrays
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// TODO IMPLEMENT WITHOUT HASH
void solve()
{
    ll n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    unordered_map<ll, ll> hash;
    vector<ll> arr;
    for (ll i = 0; i < n1; i++)
    {
        ll num;
        cin >> num;
        if (!hash[num])
        {
            hash[num] = 1;
        }
    }

    for (ll i = 0; i < n2; i++)
    {
        ll num;
        cin >> num;
        if (hash[num] == 1)
        {
            hash[num] = 2;
        }
    }

    for (ll i = 0; i < n3; i++)
    {
        ll num;
        cin >> num;
        if (hash[num] == 2)
        {
            arr.push_back(num);
            hash[num] = 3;
        }
    }

    if (arr.empty())
    {
        cout << -1;
        return;
    }
    for (int x : arr)
    {
        cout << x << ' ';
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