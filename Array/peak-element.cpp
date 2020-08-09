

 // } Driver Code Ends
#include<iostream>
using namespace std;

//we have to impliment this function
int peakElement(int a[], int n)
{
  int left = 0;
  int right = n-1;
  int mid = -1;
  while(left<=right){
      mid=(left+right)/2;
      if(a[mid-1]<a[mid] && a[mid+1]<a[mid]){
          return mid;
      }
      else if(a[mid+1]>a[mid]){
          left=mid+1;
      }
       else{
          right=mid-1;
      }
  }
  return mid;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends
