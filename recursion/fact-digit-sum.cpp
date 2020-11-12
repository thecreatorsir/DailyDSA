#include<bits/stdc++.h>
using namespace std;
int test_arr[10]={1,1,2,6,24,120,720,5040,40320,362880};

void A(int x,string op,int pos){
    if(x==0){
        reverse(op.begin(),op.end());
        cout<<op<<endl;
        return;
    }
    if(x<test_arr[pos]){
        A(x,op,pos-1);
    }
    else {
     char p=pos+48;  
     A(x-test_arr[pos],op+p,pos);
  }
}

int main(){
    int t;
    cin>>t;
    while(t--){
    string op="";
    int x;
    cin>>x;
    A(x,op,9);
}
	return 0;
}
