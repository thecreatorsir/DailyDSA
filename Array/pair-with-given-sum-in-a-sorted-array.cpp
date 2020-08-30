#include<bits/stdc++.h>
using namespace std;
void findPair(int a[],int n,int sum);
int main()
 {
int t;
cin>>t;
while(t--){
int n,sum;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cin>>sum;
findPair(a,n,sum);
} 
	return 0;
}
void findPair(int a[],int n,int sum){
    int flag = 0;
    int left = 0;
    int right = n-1;
        while(left<right){
            if(a[left]+a[right] == sum){
                cout<<a[left]<<" "<<a[right]<<" "<<sum<<endl;
                flag=1;
                left++;
                right--;
            }
            else if(a[left]+right < sum){
                left++;
            }
            else{
                right--;
            }
        }
        
    
    if(flag==0){
        cout<<-1<<endl;
    }
}
