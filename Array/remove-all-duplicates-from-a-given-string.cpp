#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;

while(t--){
unordered_set <char> uset;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(uset.find(s[i])==uset.end()){
        cout<<s[i];
        uset.insert(s[i]); 
    }
      
}
cout<<endl;
}
	return 0;
}
