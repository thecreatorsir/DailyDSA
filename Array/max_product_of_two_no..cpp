#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,ind;
	    cin>>n;
	    int a[n];
	    int max=INT_MIN;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>max){
	            max=a[i];
	            ind = i;
	        }
	    }
	    int p = INT_MIN;
	    for(int i = 0;i<n;i++){
	       if(max*a[i]>p && ind != i){
	           p = max*a[i];
	       } 
	    }
	    cout<<p<<endl;
	    
	   
	    
	}
	return 0;
}
