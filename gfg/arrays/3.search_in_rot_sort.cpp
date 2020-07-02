#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long n;
	    cin >> n;
	    vector<long long> a(n);
	    for(long long i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    
	    long long k;
	    cin >> k;
	    
	    long long low = 0;
	    long long high  = n -1;
	    int flag = 0;
	    while(low <= high)
	    {
	        long long mid = low + (high - low) / 2;
	       
	        if(a[mid] == k)
            {
                flag = 1;
                cout << mid << "\n";
                break;
            }
            
            if(a[mid] >= a[low])
            {
                if(a[mid] >= k && a[low] <= k)
                {
                    high = mid - 1;
                }
                else
                {
                    low  = mid + 1;
                }
            }
	        else
	        {
	            if(a[mid] <= k && a[high] >= k)
	            {
                    low = mid + 1;	                
	            }
	            else
	            {
	                high = mid - 1;
	            }
	        }
	    }
	    
	    if(!flag)
	        cout << -1 << "\n";
	}
	return 0;
}

