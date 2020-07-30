#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	     int n,k,count,index=-1;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
      for(int i=0;i<n;i++){
          int count=0;
          for(int j=0;j<n;j++){
              if(a[i]==a[j]){
                  count++;
              }
          }
          if(count==k){
              index = i;
              break;
          }
      }
      
      
    if(index==-1)
        cout<<index<<endl;  
    else
        cout<<a[index]<<endl;
    
	}
	return 0;
}
