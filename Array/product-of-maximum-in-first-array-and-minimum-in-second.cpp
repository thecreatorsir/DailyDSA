#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n1,n2,i=0;
	    cin>>n1;
	    int a[n1];
	      
	    while(i<n1){
	        cin>>a[i];
	        i++;
	    }
	      cin>>n2;
	    int b[n2];
	    	   i=0;
	      while(i<n2){
	        cin>>b[i];
	        i++;
	    }
	    sort(a,a+n1);
	    sort(b,b+n2);
	    
	    cout<<a[n1-1]*b[0]<<endl;
        
	    
	}
	return 0;
}
