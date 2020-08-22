#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
    multimap <int,int> hashTab;
    multimap <int,string> hashInd;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cin>>a[i]; 
   hashTab[a[i]]=i;
   hashInd[i]=to_string(a[i]);
}
sort(a,a+n);
for(int i=0;i<n;i++){
    if(hashTab.find(a[i])!=hashTab.end() && i<n-1){
        hashInd[hashTab[a[i]]]=to_string(a[i+1]);
    }else{
        hashInd[hashTab[a[i]]] = "_";
    }
}
for(auto x:hashInd){
    cout<<x.second<<" ";
}
cout<<endl;
} 
	return 0;
}
