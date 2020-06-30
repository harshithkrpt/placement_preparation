/* 
 *  Love For The Twins
 *      https://practice.geeksforgeeks.org/problems/love-for-the-twins/0
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    unordered_map<int, int> hash;
    int n;
    cin >> n;
    vector<int> arr(n);
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (!hash[arr[i]])
        {
            hash[arr[i]] = 1;
        }
        else
        {
            pairs += 2;
            hash[arr[i]] = 0;
        }
    }

    cout << pairs;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}