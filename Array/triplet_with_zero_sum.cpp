#include<bits/stdc++.h>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}
bool findTriplets(int arr[], int n)
{   sort(arr,arr+n);
    for(int i  = 0;i<n-2;i++){
    int k = i+1;
    int j = n-1;
    while(k<j){
        int sum = arr[i]+arr[k]+arr[j];
        if(sum==0)
            return true;
        else if(sum<0)
            k++;
        else if(sum>0)
            j--;
        
    }
   
}

  return false;   
}
