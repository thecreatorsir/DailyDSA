#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int a[n];
int b[k];
int sum1=0,sum2=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum1+=a[i];
}
for(int i=0;i<k;i++) {
    cin>>b[i];
    sum2+=b[i];
}
int diff=abs(sum1-sum2);
int flag=0;
int i=0,j=0;
while(i<n && j<k){
    if(a[i]+b[j]==diff){
        cout<<"1"<<endl;
        flag=1;
        break;
    }
    else if(a[i]>b[j])
        i++;
    else
        j++;
}
if(flag==0)
    cout<<"-1"<<endl;
}
	return 0;
}
