#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n;
int a[n+1] = {0};
for(int i=0;i<n;i++){
   cin>>k;
   a[k]++;
}
for(int i=1;i<=n;i++){
 cout<<a[i]<<" ";
}
cout<<endl;
}
	return 0;
}
