#include<iostream>
using namespace std;

void solve(string ip,string op){
	if(ip.length()==0){
//		if(op!="")
	     cout<<op<<" ";
	 return;
}   
	string op1 = op;
	op1.push_back('_');
    op1.push_back(ip[0]);
	string op2 = op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	
	solve(ip,op1);
	solve(ip,op2);
	
	return;
}

int main(){
	string op = "";
	string ip;
	cin>>ip;
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op);
	return 0;
}
