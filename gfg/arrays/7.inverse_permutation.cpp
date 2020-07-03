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
	vector<int> a(n+1);
	
	for(int i=1;i<=n;i++)	
	{
		int num;
		cin >> num;
		a[num] = i;	
	}

	for(int i=1;i<=n;i++)
		cout << a[i] << " ";
	cout << "\n";
   }
   return 0;
}
