#include<bits/stdc++.h>
using namespace std;

string solve(string ip){
    string ans = "";
     int i = 0;
    while(ip[i]){
        
        if(ip[i]!=ip[i+1]){
            ans += ip[i];
            i++;
        }
        
        if(ip[i] and ip[i]==ip[i+1]){
          while(ip[i]==ip[i+1]) 
          i++;
          
          i++;
        } 
    }
    
    int flag = 0;
    
    for(i=0;i+1<ans.length();i++){
        if(ans[i]==ans[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag==1)
     ans = solve(ans);
    
    return ans;
  
}
int main()
 {
int t;
cin>>t;
while(t--){
string ip;
cin>>ip;
string ans = solve(ip);
cout<<ans<<endl;
    
}
	return 0;
}
