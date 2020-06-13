/*
     Check whether n is present in an array of size m or not.
    Input -n,m (Input number, size of array)-Take input n elements for the arrayOutput -> true/false
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, elem;
    cin >> n;
    cin >> elem;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // if array is sorted then do a binary search
    // if (binary_search(arr.begin(), arr.end(), elem))
    // {
    //     cout << "TRUE";
    // }
    // else
    // {
    //     cout << "FALSE";
    // }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == elem)
        {
            cout << "TRUE";
            return;
        }
    }

    cout << "FALSE";
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