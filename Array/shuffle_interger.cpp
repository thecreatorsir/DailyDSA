#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i = 0;i<n;i++){
        cin>>a[i];
    }
         
    for(i = 0,j=n/2;i<n/2&&j<n;i++,j++){
        cout<<a[i]<<" "<<a[j]<<" ";
    }
    for(;i<n/2;i++){
        cout<<a[i]<<" ";
    }
    for(;j<n;j++){
        cout<<a[j]<<" ";
    }
   
    cout<<endl;
}
	return 0;
}
