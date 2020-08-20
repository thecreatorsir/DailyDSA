#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
 map <long long int,int> p;    
    int n;
    cin>>n;
    long long int a[n];
    int flag=0;
for(int i=0;i<n;i++){
     cin>>a[i];
      p[a[i]]++;
}
for(int i=0;i<n;i++){
    if(p[a[i]]==1){
        cout<<a[i]<<endl;
        flag=1;
        break;
    }
}
if(flag == 0){
   cout<<0<<endl; 
}
}
	return 0;
}
