#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
int j=0;
for(int i=n-1;i>=0;i--,j++) 
if(a[i]>b[j]) swap(a[i],b[j]);
else break;
sort(a,a+n);
sort(b,b+n);
cout<<a[n-1]+b[0]<<endl;
}
	return 0;
}
