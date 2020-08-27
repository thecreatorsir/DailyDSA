#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
int l,r;
cout<<max(a[0]*a[1]*a[n-1],a[n-3]*a[n-2]*a[n-1])<<endl;
} 
	return 0;
}
