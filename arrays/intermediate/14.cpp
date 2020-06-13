// F ind Largest sum contiguous Subarray.[Very Important]
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sum = 0;
    int best = INT_MIN;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum = max(num, sum + num);
        best = max(best, sum);
    }

    cout << best;
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