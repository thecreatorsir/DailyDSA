#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
    unordered_set <int> p;
int n;
cin>>n;
int a[n*n];
for(int i=0;i<n*n;i++){
   cin>>a[i];   
}
int i=0,k=0;
while(i<n*n){
    k=i+n;
    for(int j=i;j<k;j++){
      if(p.find(a[j])==p.end()) {
          p.insert(a[j]);
          cout<<a[j]<<" ";
          break;
      }
    }
    i+=n;
}
cout<<endl;
} 
	return 0;
}
