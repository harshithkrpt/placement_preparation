#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// TODO CHECK FOR THE ANSWER IF WRITE OR NOT
void solve()
{
    ll n;
    cin >> n;

    vector<int> num(n + 1);
    num[0] = 1;
    num[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        num[i] = (i - 1) * (num[i - 1] + num[i - 2]);
        num[i] %= 10000000007;
    }

    cout << num[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
    cout << "\n";

    return 0;
}