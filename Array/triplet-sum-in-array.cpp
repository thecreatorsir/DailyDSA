#include<bits/stdc++.h>
using namespace std;
bool isExist(int a[],int k,int n){
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int left = i+1;
        int right = n-1;
        while(left<right){
            int sum = a[i]+a[left]+a[right];
            if(sum==k)
             return true;
             else if(sum<k)
               left++;
             else
               right--;
        }
    }
    return false;
}
int main()
 {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];

if(isExist(a,k,n))
  cout<<1<<endl;
else
  cout<<0<<endl;
} 
	return 0;
}
