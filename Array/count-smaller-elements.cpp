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

for(int i=0;i<n-1;i++){
    int count = 0;
    for(int j = i+1;j<n;j++){
        if(a[j]<a[i]){
            count++;
        }
    }
    cout<<count<<" ";
}
cout<<0<<endl;
}
	return 0;
}
