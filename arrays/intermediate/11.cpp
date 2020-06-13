/* 
    G iven an array with all distinct elements, find the largest three
elements. Expected time complexity is O(n) and extra space is O(1)
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int elem;
    int max_1 = INT_MIN;
    int max_2 = INT_MIN;
    int max_3 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        if (max_1 < elem)
        {
            max_3 = max_2;
            max_2 = max_1;
            max_1 = elem;
        }
        else if (elem < max_1 && max_2 < elem)
        {
            max_3 = max_2;
            max_2 = elem;
        }
        else if (elem < max_2 && max_3 < elem)
        {
            max_3 = elem;
        }
    }

    cout << max_1 << ' ' << max_2 << ' ' << max_3;
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