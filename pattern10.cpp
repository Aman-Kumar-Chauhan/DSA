/*
1   1
 2 2
  3
 4 4
5   5
*/
#include<iostream>
using namespace std;
#define n 6
int main()
{
	int i,j,k,l;
	for(i=1,k=2*n-1;i<=n;i++,k-=2)
	{
		for(j=1;j<i;j++)
		cout<<" ";
		for(j=1;j<=k;j++)
		{
			if(j==1 || j==k)
			cout<<i;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=n+1,k=3,l=n-2;i<=2*n-1;i++,k+=2,l--)
	{
		for(j=1;j<=l;j++)
		cout<<" ";
		for(j=1;j<=k;j++)
		{
			if(j==1 || j==k)
			cout<<i;
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
