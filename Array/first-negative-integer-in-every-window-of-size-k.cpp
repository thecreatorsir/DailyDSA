#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
  
cin>>k;  
  deque<int>  Di; 
   
    int i; 
    for (i = 0; i < k; i++) 
        if (a[i] < 0) 
            Di.push_back(i);
            
    for ( ; i < n; i++) 
    { 
        if (!Di.empty()) 
            cout << a[Di.front()] << " "; 
        else
            cout << "0" << " "; 
        while ( (!Di.empty()) && Di.front() < (i - k + 1)) 
            Di.pop_front(); 
        if (a[i] < 0) 
            Di.push_back(i); 
    } 
    // Print the first negative  
    // integer of last window 
    if (!Di.empty()) 
           cout << a[Di.front()] << " "; 
    else
        cout << "0" << " ";        
      
  
  cout<<endl;
}
	return 0;
}
