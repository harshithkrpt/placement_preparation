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
		unordered_map<int,int> hash;
		for(int i=0;i<n;i++)
		{
			int num;
			cin >> num;
			hash[num]++;	
		}

		for(auto x:hash)
		{
			if(x.second != k)
			{
				cout << x.first << "\n";
				break;
			}
		}	
	}
	return 0;
}
