#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;int count=0;;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
sort(a,a+n);
for(int i=n-1;i>=0;i--){
    int left = 0;
    int right = i-1;
    while(left<right){
          if(a[left]+a[right]==a[i]){
              count++;
              left++;
              right--;
          }
          else if(a[left]+a[right]>a[i]){
              right--;
          }
          else{
              left++;
          }
    }
} 
if(count){
    cout<<count<<endl;
}
else{
    cout<<-1<<endl;
}
}

	return 0;
}
