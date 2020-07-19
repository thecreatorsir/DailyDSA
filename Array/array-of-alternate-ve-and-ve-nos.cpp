#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i=0;
	    cin>>n;
	    int a[n];
	       vector <int> pos;
           vector <int> neg;
	    while(i<n){
	        cin>>a[i];
	        i++;
	    }
	    	   i=0;
	     while(i<n){
	        if(a[i]>=0){
	            pos.push_back(a[i]);
	        }
	        else{
	            neg.push_back(a[i]);
	        }
	        i++;
	    }
	    
        int p = pos.size();
        int ne = neg.size();
        int j=0;
        while(j<p&&j<ne)
        {
            cout<<pos[j]<<" ";
            cout<<neg[j]<<" ";
            j++;
        }
        while(j<p)
        {
            cout<<pos[j]<<" ";
            j++;
        }
        while(j<ne)
        {
            cout<<neg[j]<<" ";
            j++;
        }
	   cout<<endl;
	    
	}
	return 0;
}
