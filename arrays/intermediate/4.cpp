// missing number in array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }

    int missing = (n * (n + 1)) / 2;
    missing -= sum;

    cout << missing;
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