#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
  
   int ans=-1;
   int lg = a[n-1];
	    for(int i=n-2;i>=0;i--)
	    {
	        if(a[i]>lg){
	            lg = a[i];
	        }
	        else{
	            ans = max(ans,lg-a[i]);
	        }
	    }
	  cout<<ans<<endl;
}
	return 0;
}
