#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		int ans = ((n - 1) * 10) - ((n-1) * x);
		cout << ans << "\n";
	}
	return 0;
}
