#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(i==0 || arr1[i] != arr1[i-1]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if(j==0 || arr2[j] != arr2[j-1]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if((j==0 or arr2[j] != arr2[j-1]) && (i==0 or arr1[i] != arr1[i-1])){
                ans.push_back(arr2[j]);
            }
            i++;
            j++;
        }
    }
    while(i<n){
        if(i==0 || arr1[i] != arr1[i-1]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    
    while(j<m){
        if(j==0 || arr2[j] != arr2[j-1]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}


int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
} 
