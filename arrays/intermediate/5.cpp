// F ind all pairs on integer array whose sum is equal to given number.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    unordered_map<int, int> hash;
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash[arr[i]]++;
    }
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        if (hash[k - arr[i]])
        {
            pairs += hash[k - arr[i]];
            if (arr[i] == k - arr[i])
                pairs--;
        }
    }

    cout << pairs / 2;
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