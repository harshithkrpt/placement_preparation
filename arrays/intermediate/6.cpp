// F ind duplicates in an array.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// TODO
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (!hash[num])
        {
            hash[num] = 1;
        }
        else if (hash[num] == 1)
        {
            arr.push_back(num);
            hash[num]++;
        }
    }
    if (arr.empty())
    {
        cout << -1;
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
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
