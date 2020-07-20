#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int sf = 0;
	    int sl = 0;
	    for(int i = 0;i<(n/2);i++){
	        sf = sf + a[i];
	    }
	    for(int i = (n/2);i<n;i++){
	        sl = sl + a[i];
	    }
	    if(sf>sl){
	        cout<<sf-sl<<endl;
	    }
	    else{
	        cout<<sl-sf<<endl;
	    }
	}
	return 0;
}
