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
for(int i=0;i<n;i++)
  cin>>a[i];
 
vector <int> v;
for(int i=0;i<n;i++){
    int product = 1;  
    for(int j = 0;j<n;j++){
        if(i==j){
            continue ;
        }else{
               product = product*a[j]; 
        }
    }
    v.push_back(product);
}
for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  
  cout<<endl;
}
	return 0;
}
