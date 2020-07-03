//https://practice.geeksforgeeks.org/problems/sum-of-fai-aj-over-all-pairs-in-an-array-of-n-integers/0
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unordered_map<int,int> cnt;
		
		int n;
		cin >> n;
		int ans = 0;
		int pre_sum = 0;
		for(int i=0;i<n;i++)
		{
			int num;
			cin >> num;
			ans += (i*num) - pre_sum;
			pre_sum += num;

			if(cnt[num-1])
			  ans -= cnt[num-1];
			if(cnt[num+1])
			  ans += cnt[num+1];
			
			cnt[num]++;
			
		}	
		cout << ans << "\n";
	}
	return 0;
}
