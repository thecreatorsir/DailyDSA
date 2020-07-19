#include<bits/stdc++.h>
using namespace std;
void swap(int *p,int *q);
void reverse(int a[],int left,int right){
    while(left<right){
        swap(&a[left],&a[right]);
        left++;
        right--;
    }
}
void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n,i=0;
        cin>>n;
        int a[n];
        while(i<n){
            cin>>a[i];
            i++;
        }
        sort(a,a+n);
        reverse(a,0,n-1);
        i=0;
         while(i<n){
            cout<<a[i];
            i++;
        }
        cout<<endl;
    }
	
	return 0;
}
