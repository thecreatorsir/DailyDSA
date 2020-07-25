#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--){
    int a[10];
    int i=0,j = 0;
    while(i<10){
        cin>>a[i];
        i++;
    }
    for(i=0,j=1;j<10;j++,i++){
        if(a[i]==a[j]){
            cout<<a[i]<<endl;
            break;
        }
    }
}
	return 0;
}
