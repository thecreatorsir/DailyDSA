#include<bits/stdc++.h>
using namespace std;
int isequal(long long a[],long long b[],int n){
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n];
	    long long b[n];
	    for(int i =0;i<n;i++)
	       cin>>a[i];
	    for(int i =0;i<n;i++)
	       cin>>b[i];
	   cout<<isequal(a,b,n)<<endl;
	}
	return 0;
}
