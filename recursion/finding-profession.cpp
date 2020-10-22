#include<bits/stdc++.h>
using namespace std;

char solve(int n,int pos){
    if(n==1)
     return 'e';
    if(solve(n-1,(pos+1)/2)=='d')
        return (pos%2)?'d':'e';
        
    return (pos%2)?'e':'d';
}

int main()
 {
int t;
cin>>t;
while(t--){
 int n,pos;
 cin>>n>>pos;

(solve(n,pos)=='d')?cout<<"Doctor"<<endl:cout<<"Engineer"<<endl;

} 
	return 0;
}
