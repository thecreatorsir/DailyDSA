#include<iostream>
using namespace std;
int main()
 {int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n];
	    i=0;
	    int shu = 0;
	    while(i<n){
	        cin>>a[i];
	        shu^=a[i];
	        i++;
	    }
	   cout<<shu<<endl; 
	}
	return 0;
}
