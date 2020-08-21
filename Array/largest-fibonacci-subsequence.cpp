#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
unordered_set<int>p;
int n1 = 0, n2 = 1, n3;
p.insert(n1);
p.insert(n2);
while(n1 <= 1000)
{
n3 = n1 + n2;
p.insert(n3);
n1 = n2;
n2 = n3;
}
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cin>>a[i];
  if(p.find(a[i])!=p.end())
     cout<<a[i]<<" ";   
}
cout<<endl;
} 
	return 0;
}
