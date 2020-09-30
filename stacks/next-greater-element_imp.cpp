#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
           cin>>a[i];
        stack <ll> s;
        vector <ll> v(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and a[i]>s.top()) s.pop();
            if(s.empty()) v[i] = -1;
            else v[i] = s.top();
            s.push(a[i]);
        }
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    } 
    	return 0;
}
