#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
   int mid=0,low=0,high=n-1;
   while(mid<=high){
       if(a[mid]==0){
           swap(a[mid],a[low]);
           low++;
           mid++;
       }
       else if(a[mid]==2){
           swap(a[mid],a[high]);
           high--;
       }
       else{
           mid++;
       }
   }
}
