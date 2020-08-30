#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,k,x;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cin>>x;
int index = -1;
for(int i =0;i<n;i++)
  if(a[i]==x){
      index = i;
      break;
  }
  cout<<index<<endl;
} 
	return 0;
}
