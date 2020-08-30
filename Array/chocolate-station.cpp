#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,p;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cin>>p;
int cbout = a[0];
int cbal = 0;

for(int i=1;i<n;i++){
    cbal = cbal + a[i-1]-a[i];
    if(cbal>0)
      continue;
    else
      cbout = cbout + abs(cbal);
      cbal = 0;
}
cout<<cbout*p<<endl;
} 
	return 0;
}
