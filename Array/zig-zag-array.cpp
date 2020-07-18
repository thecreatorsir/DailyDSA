#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
 {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k = 0;
    while(k < n-1){
    
        if(a[k]>=a[k+1] && k<n-1){
            swap(&a[k],&a[k+1]);
        }
         k++;
        if(a[k]<=a[k+1] && k<n-1){
            swap(&a[k],&a[k+1]);
        }
        k++; 
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
}
	return 0;
}
