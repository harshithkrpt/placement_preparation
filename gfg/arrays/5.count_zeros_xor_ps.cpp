#include<bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
      cin >> a[i];
    }
    
    unordered_map<int,int> hash;

    int ans = 0;
    for(int i=0;i<n;i++)
    {
  	if(!hash[a[i]])
	{
	   hash[a[i]] = 1;
	}
	else
	{
	   ans += hash[a[i]];
   	   hash[a[i]]++;
	}
    } 

    cout << ans << "\n";
  }
  return 0;
}
