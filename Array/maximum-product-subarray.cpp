#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int ar[n];
	    for(int i = 0 ; i < n ; i ++) cin>>ar[i];
	    long long int curr_max = ar[0];
	    long long int curr_min = ar[0];
	    long long int prev_max = ar[0];
	    long long int prev_min = ar[0];
	    long long int ans = ar[0];
	    for(int i = 1 ; i < n ; i++)
	    {
	        long long int max1 = max((ar[i]*prev_max)%1000000007, (ar[i]*prev_min)%1000000007);
	        long long int min1 = min((ar[i]*prev_max)%1000000007, (ar[i]*prev_min)%1000000007);
	        curr_max = max( max1,ar[i]);
	        curr_min = min( min1,ar[i]);
	        ans = max(ans,curr_max);
	        prev_max = curr_max;
	        prev_min = curr_min;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
