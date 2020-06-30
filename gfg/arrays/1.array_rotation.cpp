#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	// Left Rotate :  Anti Clock Wise
	// a[(i+d)%n]
	
	// Right Rotate : Clock Wise
	// a[(i+n-d)%n]
	
	while(t--)
	{
		int n,d;
		cin >> n >> d;
		vector<int> a(d);
		vector<int> b;
		for(int i=0;i<n;i++)
		{
			if(i < d)
			{
				cin >> a[i];
			}
			else
			{
				int num;
				cin >> num;
				b.push_back(num);
			}
		}
		
		for(auto x:b)
			cout << x << " ";
	
		for(auto x:a)
			cout << x << " ";
		
		cout << "\n";
	}
	return 0;
}
