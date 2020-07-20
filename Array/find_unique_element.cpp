#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
    int k,n;
    cin>>n>>k;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
   
    for(int i = 0;i<n;i++){
         int count = 0;
        for(int j = 0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==1){
            cout<<a[i]<<endl;
        }
    }
    
}
	return 0;
}
