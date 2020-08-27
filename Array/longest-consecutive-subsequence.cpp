#include <bits/stdc++.h>

using namespace std;

int findLongestConseqSubseq(int [], int );

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		
		// input array elements
		for(int i=0;i<n;i++)
		    cin>>a[i];
		
		cout<< findLongestConseqSubseq(a, n)<<endl;
		
	}
	return 0;
}// } Driver Code Ends





int findLongestConseqSubseq(int a[], int n)
{
    sort(a,a+n);
    int count=0;
    int len = 1;
    int maxlen = 1;
    
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]==0)
        continue;
        else if(a[i]-a[i-1]==1){
            len++;
           maxlen=max(len,maxlen);  
        }
        else
         len=1;
    }
    return maxlen;
}
