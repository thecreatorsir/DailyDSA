#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
unordered_map<int,int>ump1,ump2;
int sum1=0,sum2=0;
for(int i=0;i<n;i++){
	int num;
	cin>>num;
	sum1+=num;
	ump1[num]++;
}
for(int i=0;i<k;i++){
	int num;
	cin>>num;
	sum2+=num;
	ump2[num]++;
}

int flag = -1;
int diff = abs(sum1-sum2);
for(auto x:ump1){
	if(ump2[diff-x.first]>0)
	 flag=1;
}
cout<<flag<<endl;
}
return 0;

}





