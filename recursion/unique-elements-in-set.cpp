#include<bits/stdc++.h>
using namespace std;
set <string> s;
set <string> solve(string ip,string op){
	if(ip.length()==0){
	 s.insert(op);
	 return s;
}
	string op1 = op;
	string op2 = op;
	
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	
	solve(ip,op1);
	solve(ip,op2);
	
	return s;
}

int main(){
	string op = "";
	string ip;
	cin>>ip;
	solve(ip,op);
    set<string> :: iterator itr; 
    for (itr = s.begin(); itr != s.end(); itr++) 
        cout << *itr << " "; 
	return 0;
}
