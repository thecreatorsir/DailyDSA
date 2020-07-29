#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	  int i,temp=0;
	    for( i=0;i<n;i++)
	    {
	        int c1,c2,j;
	          int flag=0;
	        if(a[i]<k)
	        {
	            j=a[i];
	            if(j<10)
	            continue;
	            else{
	            while(j>=10)
	            {
	                c1=j%10;
	                c2=(j/10)%10;
	                if(abs(c1-c2)!=1)
	                flag=1;
	                j/=10;
	            }
	        }
	    }
	    if(flag!=1 && a[i]<k){
	    cout<<a[i]<<" ";
	    temp=1;
	    }
	}
	if(temp==0)
	cout<<"-1"<<" ";
	cout<<endl;
	}
	return 0;
}
