#include<bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  vector<int> is_prime = {0,0,1,1,0,1,0,1,0,0};
  vector<int> ans(110);
	int nn = 0;
	int i = 0;
	while(i<=105)
	{
	  int temp = nn;
	  bool flag = true;
	  while(temp)
	  {
	     if(!is_prime[temp % 10])
	     {
		flag = false;
	        break;
	     }
	     temp = temp / 10;
	  }

	  if(flag){
		ans[i] = nn; 	
		i++;
	}
	  nn++;	  
	}			       			
	
    	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << ans[n] << "\n";
	}  	
 
  return 0;
}
