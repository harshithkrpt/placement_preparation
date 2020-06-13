/* 
    Given an array which consists of only 0, 1 and 2. Sort the array without
    using any sorting algorithm.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int z_count = 0;
    int o_count = 0;
    int t_count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
            z_count++;
        else if (num == 1)
            o_count++;
        else
            t_count++;
    }

    while (z_count--)
    {
        cout << 0 << ' ';
    }

    while (o_count--)
    {
        cout << 1 << ' ';
    }

    while (t_count--)
    {
        cout << 2 << ' ';
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