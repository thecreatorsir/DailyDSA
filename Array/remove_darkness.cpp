#include<iostream>
using namespace std;
long long max(long long a[],int n){
    long long greater = a[0];
    for(int i = 1;i<n;i++){
        if(a[i]>greater){
            greater = a[i];
        }
    }
    return greater;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    long long a[n];
	    i=0;
	    while(i<n){
	        cin>>a[i];
	        i++;
	    }
	    cout<<max(a,n)<<endl;
	    
	    
	}
	return 0;
}
