/* 
    Given an number n. Find the number of occurrences of n in the array.
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int elem;
    int count{0};
    cin >> elem;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == elem)
        {
            count++;
        }
    }

    cout << count;
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