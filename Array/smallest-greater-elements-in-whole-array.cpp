#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++) {
cin>>a[i];
b[i]=a[i];
}
sort(a,a+n);
for(int j=0;j<n;j++) {
    int i=0;
while(i!=n) { 
    if(b[j]>=a[i])
      i++;
else{
cout<<a[i]<<" "; 
break; 
}
}
if(i==n) 
    cout<<"_"<<" ";
}
cout<<endl; 
    
}
return 0;
}
