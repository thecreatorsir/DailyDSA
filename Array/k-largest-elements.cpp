#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n,k,i,j;
	   cin>>n>>k;
	   int a[n];

	   for(i =0;i<n;i++ ){
	       cin>>a[i];
	   }
	   sort(a,a+n);
	 

	   for(i = n-1;i>=n-k;i--){
	       cout<<a[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
