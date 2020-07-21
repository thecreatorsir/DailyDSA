#include<bits/stdc++.h>
using namespace std;
int main()
 { int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for( i = 0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    bool flag;
	    if(n==1){
	        cout<<-1<<endl;
	    }else{
	       for(i = 0,j=1;j<n;i++,j++){
	          flag = false;
	        if(a[i]!=a[j]){
	            flag = true;
	            break;
	        }
	    } 
	    if(flag == true){
	        cout<<a[0]<<" "<<a[j]<<endl;
	    }else{
	        cout<<-1<<endl;
	    } 
	    }
	    
	}
	return 0;
}
