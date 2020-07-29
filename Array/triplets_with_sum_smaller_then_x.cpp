#include<bits/stdc++.h>
using namespace std;
int findTripletsCount(int arr[], int n,int sm);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n,sm;
    	cin>>n>>sm;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        cout<<findTripletsCount(arr,n,sm)<<endl;
      
	}
    return 0;
}
int findTripletsCount(int arr[], int n,int sm)
{   sort(arr,arr+n);
    int count = 0;
    for(int i  = 0;i<n-2;i++){
    int k = i+1;
    int j = n-1;
   
    while(k<j){
        int sum = arr[i]+arr[k]+arr[j];
        if(sum<sm){
      count+=j-k;
        k++;
        }
       else{
          j--;
       }
        
        
    }
   
}

  return count;   
}
