#include<bits/stdc++.h>

using namespace std;

vector<int> ans(vector<int> & a)
{
	int l = 0;
	int r = a.size() - 1;
	while(l < r)
	{
		while(a[l] != 1)
			l++;
		while(a[r] != 0)
			r--;
		
		if(l < r)
		{
			swap(a[l],a[r]);
		}	
	}

	return a;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;	
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];
		
		vector<int> res = ans(a);
		for(int i=0;i<n;i++)
			cout << res[i] << " ";
		cout << "\n";
	}
	return 0;
}
