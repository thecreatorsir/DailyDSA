#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}// } Driver Code Ends


/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
     int left=0;int mid = 0;
     int right = n-1;
     while(left<=right){
         mid=(left+right)/2;
         if(a[mid]==b[mid] && a[mid+1]!=b[mid+1]){
             return mid+1;
         }
         else if(a[mid]!=b[mid] && a[mid-1]==b[mid-1]){
             return mid;
         }
         else if(a[mid]==b[mid] && a[mid+1]==b[mid+1]){
             left = mid+1;
         }
         else{
             right=mid-1; 
         }
     }
     return mid;
}
