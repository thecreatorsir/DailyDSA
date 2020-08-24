#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[n],b[m],result[n+m]={0};
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<m;i++) cin>>b[i];

sort(a,a+n);
sort(b,b+m);
int i=0,j=0,k=0;
while(i<n && j<m){
    if(a[i]<=b[j]){
        result[k]=a[i];
        i++;
        k++;
    }
    else{
        result[k]=b[j];
        j++;
        k++;
    }
}
while(i<n){
    result[k]=a[i];
        i++; 
        k++;
}
while(j<m){
    result[k]=b[j];
        j++; 
        k++;
}
for(int i=0;i<n+m;i++) cout<<result[i]<<" ";

cout<<endl;
} 
	return 0;
}
