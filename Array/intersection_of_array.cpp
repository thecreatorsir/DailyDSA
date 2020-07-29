#include<bits/stdc++.h>
using namespace std;
int NumberofElementsInIntersection (int a[], int b[], int n, int m );

 
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
  unordered_map<int,int> hash;
   int count = 0;
  for(int i=0;i<n;i++){
      if(hash[a[i]]==0){
         hash[a[i]]++; 
      }
  }
 
  for(int i=0;i<m;i++){
      if(hash[b[i]]==1){
          count++;
          hash[b[i]]--;
      }
  }
  return count;
}
    

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
			
		cout << NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  
