#include<bits/stdc++.h> 
using namespace std;

int main()
 {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
for(int k=0;k<n-1;k++){
    	int greater = INT_MIN;
        for(int j=k+1;j<n;j++){
          if(a[j]>greater){
     	  greater = a[j];
	      }
        }
     a[k]=greater;  
   }
   a[n-1]=-1;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
	return 0;
}
