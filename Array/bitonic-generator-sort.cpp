#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
vector <int> even;
vector <int> odd;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(i%2==0)
        even.push_back(a[i]);
    else
        odd.push_back(a[i]);
}
int evenSize = even.size();
int oddSize = odd.size();
sort(even.begin(), even.end());
sort(odd.begin(), odd.end(),greater <int>()); 

for (auto x : even) 
        cout << x << " "; 
for (auto x : odd) 
        cout << x << " ";
        
        cout<<endl;
}
	return 0;
}
