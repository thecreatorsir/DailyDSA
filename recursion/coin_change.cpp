#include <bits/stdc++.h>
using namespace std;
int solve(int ans[], int key,int index, int n){
    if(key==0)
      return 1;
    if(key < 0 || index>=n)
	 return 0;
	int sum = solve(ans,key-ans[index],index,n) + solve(ans,key,index+1,n);
	  return sum;
}

int main() {
	int n,key;
	cin>>n;
	int ans[n];
    memset(ans, 0, sizeof(ans));
    for(int i=0;i<n;i++)
     cin>>ans[i];
    cin>>key;
    cout<<solve(ans,key,0,n)<<endl;
    return 0;
}
