
#include <bits/stdc++.h> 
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray)
{
    int right = binArray.size()-1;
    int left = 0;
    while(left<right){
        while(binArray[left]==0 && left<right){
            left++;
        }
        while(binArray[right]==1 && left<right){
            right--;
        }
        if(left<right){
            swap(binArray[left],binArray[right]);
        }
    }
    return binArray;
}
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	      
	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}

