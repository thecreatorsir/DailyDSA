#include<bits/stdc++.h>
using namespace std;

int solve(int n){
 if(n==2 or n==3)
  return 2;
  
 return 2*solve(n/2);  
}


int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int result = solve(n);
cout<<result<<endl; 
}
	return 0;
}
