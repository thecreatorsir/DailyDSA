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
for(int i=0;i<n;i++)
  cin>>a[i];
int max = INT_MIN;
sort(a,a+n);
for(int i= 0;i<n-1;i++){
    int diff=abs(a[i]-a[i+1]);
    if(diff > max)
      max=diff;
}
if(n==1)
 max=0;
cout<<max<<endl;
} 
	return 0;
}
