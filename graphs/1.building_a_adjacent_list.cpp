#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int v, e;
    cin >> v >> e;
    vector<list<int>> adjacent_list(v);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacent_list[u].push_back(v);
        adjacent_list[v].push_back(u);
    }

    for (int i = 0; i < v; i++)
    {
        cout << i;
        for (auto x : adjacent_list[i])
        {
            cout << " -> " << x;
        }
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}