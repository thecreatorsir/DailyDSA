#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
set <int> s;
int n,m,k;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<m;i++) cin>>b[i];
cin>>k;
for(int i=0;i<n;i++){
    for(int j = 0; j<m ;j++){
        int sum = a[i]+b[j];
     if(s.find(sum)==s.end()){
         s.insert(sum);
     }
    }
}
set <int> :: iterator itr = s.begin();
advance(itr, k-1);
cout<<*itr<<endl;
} 

	return 0;
}
