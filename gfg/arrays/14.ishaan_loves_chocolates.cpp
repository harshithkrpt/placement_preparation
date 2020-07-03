#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int m = INT_MAX;
		for(int i=0;i<n;i++)
		{
			int num;
			cin >> num;
			m = min(m,num);
		}	
		cout << m << "\n";
	}
	return 0;	
}
