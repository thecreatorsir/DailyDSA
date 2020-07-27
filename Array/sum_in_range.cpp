#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m,a,b,k;
	    cin>>n>>m;
	    int arr[n]={0};
	    for(int i=0;i<m;i++){
	        cin>>a>>b>>k;
	        for(int j = a ;j<=b;j++){
	            arr[j] += k;
	        }
	    }
	    sort(arr,arr+n);
	    cout<<arr[n-1]<<endl;
	}
	
	return 0;
}
