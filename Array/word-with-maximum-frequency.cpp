#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
cin.ignore();
while(t--){
map <string,int> m;
vector <string> v;
string s;
getline(cin,s);
stringstream ss(s);
string store;
while(ss >> store){
    m[store]++; 
    v.push_back(store);
}
 string temp;
 int max = 0;
for(int i=0;i<v.size();i++){
    if(m[v[i]]>max){
        max = m[v[i]];
        temp = v[i];
    }
}
 cout<<temp<<" "<<max<<endl;
}
	return 0;
}
