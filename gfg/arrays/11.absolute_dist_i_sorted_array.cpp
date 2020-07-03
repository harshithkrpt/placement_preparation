#include<bits/stdc++.h>

using namespace std;


int main()
{
	int arr[] = {-2, -1, 0, 1, 1}; 
   	int n = sizeof(arr)/sizeof(arr[0]); 
	
	int l = 0;
	int r = n - 1;
	int c = n;
	int sum = 0;
	
	while(l < r)
	{
		while(l != r && arr[l] == arr[l+1])
			c--,l++;
		while(l != r && arr[r] == arr[r-1])
			c--,r--;
		
		if(l == r)
		  break;

		sum = arr[l] +arr[r];
		
		if(sum == 0)
		  c--,l++,r--;
		else if(sum < 0)
		  l++;
		else
		  r--;
	}
		
	cout << c;
}

