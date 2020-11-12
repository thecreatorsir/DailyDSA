#include <bits/stdc++.h>
using namespace std;
void printarray(int a[], int n)
{
for(int i=0;i<n;i++)
printf("%d",a[i]);
printf("\n");
}

int issafe(int result[],int x2,int y2)
{
for(int i=0;i<x2;i++)
if(result[i]==y2||abs(i-x2)==abs((result[i]-y2)))
return 0;
return 1;
}

void placequeens(int result[], int x, int size)
{
for(int i=0;i<size;i++)
{
if(issafe(result,x,i)==1)
	{
	result[x]=i;
	if(size-1==x)
	{
	printf("Solution found");
	printarray(result,size);
	}
	placequeens(result,x+1,size);
	}
}
}
int main()
{
int result[4];
placequeens(result,0,4);
return 0;
}

