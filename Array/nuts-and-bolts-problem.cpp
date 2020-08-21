#include<bits/stdc++.h>
using namespace std;
void comp(string a,map <char,int > &hashTab,map <int,char> &hashInd){
    vector <int> compstr;
    for(int i=0;i<a.size();i++){
        compstr.push_back(hashTab[a[i]]);
    }
    sort(compstr.begin(),compstr.end());
    for(int i=0;i<a.size();i++){
        cout<<hashInd[compstr[i]]<<" ";
    }
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<hashInd[compstr[i]]<<" ";
    }
    cout<<endl;
}
int main()
 {
int t;
cin>>t;
while(t--){
string sys= "!#$%&*@^~";
map <char,int> hashTab;
map <int, char> hashInd;

for(int i=0;i<sys.size();i++){
    hashTab[sys[i]]=i;
}
for(int i=0;i<sys.size();i++){
    hashInd[i]=sys[i];
}
int n;
cin>>n;
string a,b;
for(int i=0;i<n;i++){
  char ch;
  cin>>ch;
  a+=ch;
}
for(int i=0;i<n;i++){
  char ch;
  cin>>ch;
  b+=ch;
} 

comp(a,hashTab,hashInd);
}
	return 0;
}
