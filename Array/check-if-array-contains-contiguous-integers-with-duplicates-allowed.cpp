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
for(int i=0;i<n;i++){
  cin>>a[i];
}
sort(a,a+n);
string flag = "Yes";
for(int i=0;i<n-1;i++){
    if(a[i+1]-a[i]==1 || a[i+1]-a[i]==0)
     continue;
    else{
     flag = "No";
     break;   
    }
}
  cout<<flag<<endl; 
}
	return 0;
}
