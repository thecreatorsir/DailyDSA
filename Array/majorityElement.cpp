#include <bits/stdc++.h>
using namespace std;
int lol(int a[],int n){
	bool flag = false;
vector <bool> visited(n,false);
    
      for(int i = 0;i<n;i++ ){
          if(visited[i] == true){
              continue;
          }
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
               visited[j]=true;
               count++; 
            }
         
        }
         if(count > n/2){
         	flag = true;
          return a[i];
        }
    }
    if(flag == false){
        return -1;
    }
   	
}
int main()
 {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++ ){
        cin>>a[i];
    }
    int k = lol(a,n);
    cout<<k<<endl;
}
	return 0;
}
