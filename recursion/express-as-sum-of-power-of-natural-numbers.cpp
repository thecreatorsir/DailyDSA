#include<bits/stdc++.h>
using namespace std;

int solve(int x,int n,int st){
    //when number found
    if(x == 0)
        return 1;
    
    //when no number found
    if(x < 0)
        return 0;
    
    //when tree got finished    
    if(st == 0)
        return 0;
    
    int val = pow(st,n);
   
    return solve(x-val,n,st-1)+solve(x,n,st-1);

}

int main()
 {
int t;
cin>>t;
while(t--){
    double x,n;
    cin>>x>>n;
    int st=0;
    st = pow(x,1/n);
    cout<<solve(x,n,st)<<endl;
}

	return 0;
}
