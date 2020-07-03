#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		
		vector<int> a(n+1,0);		
		for(int i=0;i<k;i++)
		{
			int nn;
			cin >> nn;
			a[nn]++;
		}
		
		for(int i=1;i<=n;i++)
		{
			
			a[i] = a[i] + a[i-1];
		}
		for(int i=1;i<=n;i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
