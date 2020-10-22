#include<bits/stdc++.h>
using namespace std;

void solve(int ip,string op,int ones,int zeros){
	if(ip==0){
	     cout<<op<<" ";
	 return;
    }  

	string op1 = op;
	op1.push_back('1');
	solve(ip-1,op1,ones+1,zeros);

	if(zeros<ones){
	string op2 = op;
	op2.push_back('0');
	solve(ip-1,op2,ones,zeros+1);
}

	return;
}

int main(){
	int ip;
	cin>>ip;
	int ones = 0;
	int zeros = 0;
    string op = "";
    solve(ip,op,ones,zeros);
	return 0;
}
