#include<bits/stdc++.h>
using namespace std;
int main()
 {  int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int i = 0; 
	    while(i<n){
	        cin>>a[i];
	        i++;
	    }
	    sort(a,a+n);
	    bool flag = false;
	    int j;
	    for(i = n-1,j=n-2;j>=0;i--,j--){
	        if(a[i]!=a[j]){
	            cout<<a[j]<<endl;
	            flag = true;
	            break;
	        }
	    }
	    if(flag==false){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
