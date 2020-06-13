// SORT THE GIVEN ARR
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comparator(int i1, int i2)
{
    // increasing
    return i1 < i2;

    // decreasing
    // return i1 > i2;
}

void solve()
{
    int l;
    cin >> l;
    vector<int> arr(l);
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), comparator);

    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << ' ';
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