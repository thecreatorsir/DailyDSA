#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    cout<<n<<" ";
    if(n<=0)
      return;
    solve(n-5);
	cout<<n<<" ";  
}


int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
solve(n);
cout<<endl;
} 
	return 0;
}
