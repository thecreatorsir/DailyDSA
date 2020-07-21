#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int a[n-1];
	    for(i = 0;i<n-1;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n-1);
	    int flag;
	    for(i = 1,j=0;i<=n&&j<n-1;i++,j++){
	         flag = true;
	        if(i!=a[j]){
	            flag = false;
	            break;
	        }
	   }
	        if(flag==false){
	            cout<<i<<endl;
	        }
	        else{
	            cout<<n<<endl;
	        }
	    }
	
	return 0;
}
