#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		vector<int> arr(n,0);	
		for(int i=0;i<m;i++)
		{
			int a,b,k;
			cin >> a >> b >> k;
			arr[a] += k;
			if(b + 1 < n) arr[b+1] -= k;
		}
		
		int ans = arr[0];
		for(int i=1;i<n;i++)
		{
		   arr[i] += arr[i-1];
		   ans = max(arr[i],ans);		
		}	
		
		cout << ans << "\n";
	}
	return 0;
}
