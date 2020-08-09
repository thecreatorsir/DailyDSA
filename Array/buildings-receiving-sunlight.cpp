#include<iostream>
using namespace std;
int main()
 {
int t,i;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
  cin>>a[i];

int index = -1;
int count = 0;
i = n-1;
for(;i>=0;){
	int max = a[i];
	for(int j=i-1;j>=0;j--){
		if(a[j]>max){
			max=a[j];
			index = j;
		}
	}
	if(max==a[i]){
	    index = i;
	}
	count++;
	i=index-1;
} 
cout<<count<<endl;
}
	return 0;
}
