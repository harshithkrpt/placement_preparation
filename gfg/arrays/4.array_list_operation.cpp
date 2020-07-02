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
		int arr[256] = {0};

		for(int i=0;i<n;i++)
		{
			char c,d;
			cin >> c >> d;
			if(c == 'i')
			{
				arr[d]++;
			}	
			else
			{
				if(arr[d] == 0)
					cout << "Not Present\n";
				else
					cout <<  arr[d] << "\n";
			}
		}
	}
	return 0;
}
