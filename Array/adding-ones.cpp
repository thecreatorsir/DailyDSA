#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
        int n;
        cin>>n;
        int a[n+1]={0};
        int k,j;
        cin>>k;
        while(k--)
        {
            cin>>j;
            a[j]+=1;
        }
        for(int i=1;i<n+1;i++){
            a[i]=a[i-1]+a[i];
            cout<<a[i]<<" ";}
        cout<<endl;
    }
 
	return 0;
}
