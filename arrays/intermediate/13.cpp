// F ind if there is any subarray with sum equal to zer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, bool> sumMap;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Traverse throught array and store prefix sums
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        // If prefix sum is 0 or it is already present
        if (sum == 0 || sumMap[sum] == true)
        {
            cout << "Yes";
            return;
        }

        sumMap[sum] = true;
    }
    cout << "No";
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