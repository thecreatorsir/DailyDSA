#include<iostream>
using namespace std;
int sub(int a[],int n,int k){
    int min = n+1;
    for(int i = 0;i<n;i++ ){
        int sum = a[i];
        if(sum>k){
            return 1;
        }
        for(int j=i+1;j<n;j++){
            sum+=a[j];
            
            if(sum > k && (j-i+1)<min )
             min = (j-i+1);
        }
    }
    return min;
}
int main()
 {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
if(sub(a,n,k)==n+1){
    cout<<0<<endl;
}
else{
    cout<<sub(a,n,k)<<endl;
}
}
	return 0;
}
