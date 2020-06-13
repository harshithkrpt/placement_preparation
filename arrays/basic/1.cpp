/* Create an Array of size 10 of integers. 
Take input from the user for these 10 elements
 and print the entire array after that. */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int l;
    cin >> l;
    vector<int> s(l);
    for (int i = 0; i < l; i++)
    {
        int num;
        cin >> num;
        s[i] = num;
    }

    for (int i = 0; i < l; i++)
    {
        cout << s[i] << ' ';
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