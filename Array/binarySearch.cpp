#include<bits/stdc++.h>
using namespace std;

int bin_search(int A[],int left,int right,int k);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}
int bin_search(int a[], int left, int right, int k)
{

while(left<=right){
    int mid = (left+right)/2;
    if(a[mid]==k){
        return mid;
    }
    else if(k>a[mid]){
        left=mid+1;
    }
    else {
        right=mid-1;
    }
}
    return -1;
}
