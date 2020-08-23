#include <bits/stdc++.h>
using namespace std;

bool check(int a[],int n){
    unordered_set<int> p;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p.find(a[i]+a[j])!=p.end())return true;
            else p.insert(a[i]+a[j]);
        }
    }
    return false;
}


int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
if(check(a,n))cout<<"1"<<endl;
else cout<<"0"<<endl;
}
}
