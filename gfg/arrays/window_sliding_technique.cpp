#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = { 1, 4, 2, 10, 2, 3, 1, 0, 20 }; 
	int k = 4;
	int max_sum = 0;
	for(int i=0;i<k;i++)
	{
		max_sum += arr[i];
	}
	
	int ws = max_sum;
	for(int i=k;i<9;i++) {
	   ws += arr[i] - arr[i-k];
	   max_sum = max(max_sum,ws);
	}
		
	cout << max_sum;
	return 0;
}
