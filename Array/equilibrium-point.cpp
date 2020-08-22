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
    for(int i=0;i<n;i++) cin>>a[i];
    
    int totalsum=0,leftsum=0,rightsum=0,flag=-1;
    
    if(n==1)
        cout<<1<<endl;
    else{
        for(int i=0;i<n;i++) totalsum+=a[i];
    
        for(int i=0;i<n;i++){
            leftsum+=a[i];
            if(leftsum==rightsum){
                flag=i+1;
                break;
            }
            else{
                rightsum=totalsum-leftsum;
            }
        }
        cout<<flag<<endl;
    }
} 
	return 0;
}
