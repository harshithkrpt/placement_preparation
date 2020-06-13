/* 
    Move all the negative elements to one side of the array.
 */
// TODO
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int neg_count = 0;
    vector<int> arr(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            neg_count++;
    }

    int p = 0;
    int q = neg_count;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr2[q++] = arr[i];
        }
        else
        {
            arr2[p++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << ' ';
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