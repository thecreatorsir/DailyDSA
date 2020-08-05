#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];

int index=-1;   
for(int i=0;i<n;i++){
    if(a[i]>a[i+1]){
        index=i;
        break;
    }
}  
 if(index==-1){
     cout<<a[n-1]<<endl;
 }
 else{
      cout<<a[index]<<endl; 
 }
}
	return 0;
}
