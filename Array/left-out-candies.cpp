#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int i = 1;
while(k>=i){
    k= k-i;
    if(i==n) i=1;
    else i++;
}
cout<<k<<endl;
} 
	return 0;
}
