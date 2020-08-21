#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int max = -1;
vector <int> v;
for(int i=n-1;i>=0;i--){
   if(a[i]>=max){
       max = a[i];
       v.push_back(max);
   }
}
reverse(v.begin(),v.end());
for(auto x:v){
     cout<<x<<" ";
}
cout<<endl;
} 
	return 0;
}
