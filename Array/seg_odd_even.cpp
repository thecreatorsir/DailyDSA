#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;

	while(t--){
	    	vector <int> odd;
	vector <int> even;
	    int n,temp;
	    cin>>n;
	    for(int i = 0;i<n;i++){
	        cin>>temp;
	        if(temp%2==0){
	           even.push_back(temp);
	        }else{
	          odd.push_back(temp);  
	        }
	    }
	    sort(even.begin(),even.end());
	    sort(odd.begin(),odd.end());
	 for(int i = 0;i<even.size();i++){
	     cout<<even[i]<<" ";
	 }
	 for(int i = 0;i<odd.size();i++){
	     cout<<odd[i]<<" ";
	 }
        
	cout<<endl;
	    
	}
	return 0;
}
