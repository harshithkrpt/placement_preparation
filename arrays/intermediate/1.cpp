// Union Of Two Arrays TC :  O(n+m) S.C : O(u) -> no of unique elements
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    unordered_map<int, int> item;
    int n, m;
    cin >> n >> m;
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (!item[num])
        {
            size++;
            item[num] = 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        if (!item[num])
        {
            size++;
            item[num] = 1;
        }
    }

    cout << size;
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