#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    
	    int mid = (n-1)/2;
	    int b[n];
	    b[mid]=a[0];
	    i = 1,j = 1;
	    for(;i<=mid;i++){
	        b[mid + i] = a[j++];
	        b[mid - i] = a[j++];
	    }
	    if(n%2==0){
	        b[mid + i]=a[j++];
	    }
	    for(i = 0;i<n;i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
