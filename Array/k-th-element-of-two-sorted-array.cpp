#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,m,l;
cin>>n>>m>>l;
int a[n],b[m],result[m+n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<m;i++) cin>>b[i];

sort(a,a+n);
sort(b,b+m);
int i=0,j=0,k=0;
while(i<n&&j<m){
    if(a[i]<=b[j])
        result[k++]=a[i++];
    else
    result[k++]=b[j++];
}
while(i<n)
result[k++]=a[i++];

while(j<m)
result[k++]=b[j++];


cout<<result[l-1]<<endl;
}
	return 0;
}
