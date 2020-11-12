#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(int i,int last_val){
    if(i==0) 
     return 1;
  return fun(i-1,last_val-1)*last_val;

}
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll val = 0;
        for(int i=1;i<=n;i++)
        val += fun(i,(i*(i+1))/2);
        cout<<val<<endl;
    }

	return 0;
}
