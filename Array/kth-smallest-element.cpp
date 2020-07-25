#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    int a[n];
	    int i = 0;
	    while(i<n){
	        cin>>a[i];
	        i++;
	    }
	        cin>>k;
	    sort(a,a+n);
	    cout<<a[k-1]<<endl;
	}
	return 0;
}
