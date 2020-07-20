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
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
   
    for(int i = 1;i <= n; i++){
         int flag = 0;
        for(int j = 1;j <= n; j++){
            if(i == a[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
}
	return 0;
}
