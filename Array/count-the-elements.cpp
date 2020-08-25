#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,q;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
sort(b,b+n);
cin>>q;
while(q--){
    int l;
    cin>>l;
  int temp = a[l];
auto count = upper_bound(b,b+n,temp)-b;
cout<<count<<endl;
}
} 
	return 0;
}
