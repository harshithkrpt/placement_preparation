#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> a(10);
	for(int i=0;i<10;i++)
	{
	  a[i] = i+1;
	}
		
	// two pointer technique
	int i = 0;
	int j = 9;
		
	int x;
	cin >> x;
	
	while(i < j)
	{
		if(a[i] + a[j] == x)
		{
			cout << a[i] << " " << a[j];
			return 0;
		}

		else if(a[i] + a[j] < x)
			i++;
		else
			j--;
		
	}
	cout << -1;
	
	return 0;
}
