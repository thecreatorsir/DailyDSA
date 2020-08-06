#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int left, int right){
    int mid=0;
    bool flag= false;
 while(left<=right){
      mid = floor((left+right)/2);
     if(a[mid]==1 && a[mid+1]==0){
         return mid+1;
     }
     else if(a[mid]==0 && a[mid-1]==1){
         return mid;
     }
     else if(a[mid] = 1 && a[mid+1]==1){
         left=mid+1;
         flag=true;
     }
     else{
         right=mid-1;
 
     }
 }
 if(flag){
     return mid+1;
 }
 return mid;
}
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
cout<<n-solve(a,0,n-1)<<endl;
} 
	return 0;
}
