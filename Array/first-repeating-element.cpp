#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
unordered_map <int,int> p;

int n;
cin>>n;
int a[n+1];
for(int i=1;i<n+1;i++){
  cin>>a[i];
  p[a[i]]++;
} 
int count=-1;
for(int i=1;i<n+1;i++){
    if(p[a[i]]>1){
        count = i;
        break;
    }
}
cout<<count<<endl;
}
	return 0;
}
