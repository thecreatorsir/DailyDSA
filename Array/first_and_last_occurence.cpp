#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	     int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
       int flag,start = 0; 
	 for (int i=0; i<n; i++) 
    {  
       if (a[i] == x){
           start = i;
           flag=1;
           break;
       } 
          
    }
    int end = 0;
    for (int i=n-1; i>0; i--) 
    {  
       if (a[i] == x){
           end = i;
           flag=1;
           break;
       } 
          
    }
    if(flag)
        cout<<start<<" "<<end<<endl;  
    else
        cout<<-1<<endl;
    
	}
	return 0;
}
