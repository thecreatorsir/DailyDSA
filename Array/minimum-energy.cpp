#include<iostream>
using namespace std;
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
int temp = 0;
bool flag = true;
for(int i=0;i<n;i++){
    if(a[i] < 0){
        temp = temp + a[i];
        if(temp <=0 ){
            temp = -temp+1;
            flag = false;
            break;
        }
        else{
            continue;
        }
    }
    else if(a[i]>0){
        temp = temp + a[i];
    }
}
  if(flag)
    cout<<1<<endl;
  else
    cout<<temp<<endl;
}
	return 0;
}
