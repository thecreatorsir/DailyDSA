#include<bits/stdc++.h>
using namespace std;

void solve(vector <int> v, int k,int index){
	if(v.size()==1){
	     cout<<v[0]<<" ";
	 return;
    }  

//making input small(hypothesis step)
    index = (index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,k,index);

return;
}


int main(){
	int ip,k;
	cin>>ip>>k;
    vector <int> v;
    int index = 0;
    for(int i=1;i<=ip;i++) v.push_back(i);
    solve(v,k-1,index);
	return 0;
}
