#include<bits/stdc++.h>
using namespace std;
void pushZero(vector <int> &v, int n){
  int left=0;
  int inc=left+1;
  while(inc<n){
      if(v[left]==0 && v[inc]!=0){
          swap(v[left],v[inc]);
          left++;
          inc++;
      }else if(v[left]==0 && v[inc]==0){
         inc++; 
      }
      else{
           left++;
          inc++; 
      }
  }
  for(auto x:v){
      cout<<x<<" ";
  }
}
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector <int> v;
int k;
for(int i=0;i<n;i++){
    cin>>k;
  v.push_back(k);    
}

pushZero(v,n);
cout<<endl;
}
	return 0;
}
