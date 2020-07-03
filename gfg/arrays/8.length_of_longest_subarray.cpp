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
		int ans = 0;
		int pc = 0;
		for(int i=0;i<n;i++)
		{
		  	int num;
			cin >> num;
			if(num >= 0 )
			{
				pc++;
			}
			else
			{
				ans = max(pc,ans);
				pc  = 0;
			}		
		}		
		cout << max(ans,pc) << "\n";
	}
	return 0;
}
