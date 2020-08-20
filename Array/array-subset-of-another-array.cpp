#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
unordered_map <int,int> p;    
int n,k;
cin>>n>>k;
for(int i=0;i<n;i++){
    int x;
    cin>>x;  
    p[x]++;
}
for(int i=0;i<k;i++){
    int y;
    cin>>y;  
    p[y]--;
}
int flag=1;
for(auto x: p)
    if( x.second < 0 )
        flag=0;
    
if(flag)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
  
}
	return 0;
}
