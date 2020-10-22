#include<bits/stdc++.h>
using namespace std;
int solve(int mila,int gila,vector<int> val){
    if(val.size()==0 and mila!=gila)
      return 0;
    if(mila==gila)
      return 1;
    
    if(mila>gila){
        return 0;
    }  
 
    int temp = val[0];
    val.erase(val.begin()+0);  
    
    int ans = (solve(mila+temp,gila-temp,val)||solve(mila,gila,val));

    return ans; 
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,mila;
		cin>>n>>mila;
		vector <int> val(n);
		int gila = 0;
		int temp;
		for(int i=0;i<n;i++){
		  cin>>temp;
		  val.push_back(temp);
		  gila+=temp;
		}
		
		if((mila+gila)%2!=0) //to reduce complexity
		 cout<<"0"<<endl;
		else 
		 cout<<solve(mila,gila,val)<<endl;
	} 
	return 0;
}
