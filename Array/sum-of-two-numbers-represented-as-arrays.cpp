#include<bits/stdc++.h>
using namespace std;
void summ(int a[],int b[],int sz){
    int i,carry = 0;
      vector <int> v;
for(i = sz-1;i>=0;i--){
    int sum = a[i]+b[i]+carry;
    if(sum>=10){
        sum = sum-10;
        carry = 1;
        v.push_back(sum);
    }else{
        v.push_back(sum);
        carry = 0;
    }
}
if(i<0 && carry==1)
  v.push_back(carry);
 
for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
}
int main()
 {
int t;
cin>>t;
while(t--){
  
int n,m,i;
cin>>n>>m;
if(n>=m){
 int a[n]={0},b[n]={0};
 for(i=0;i<n;i++) cin>>a[i];
 for(i=n-m;i<n;i++) cin>>b[i];  
 summ(a,b,n);
}
else{
    int a[m]={0},b[m]={0};
    for(i=m-n;i<m;i++) cin>>a[i];
    for(i=0;i<m;i++) cin>>b[i];
    summ(a,b,m);
}

cout<<endl;
} 
	return 0;
}
