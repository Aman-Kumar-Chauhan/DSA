/*
    1
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
*/
#include<iostream>
using namespace std;
#define n 5
int main()
{
	int i,j,k;
	for(i=1,k=0;i<=n;i++,k++)
	{
		for(j=1;j<=n-i;j++)
		cout<<" ";
		for(j=1;j<=i+k;j++)
		{
			if(j==1 || j==i+k)
			cout<<i;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=n-1,k=n-2;i>=1;i--,k--)
	{
		for(j=1;j<=n-i;j++)
		cout<<" ";
		for(j=1;j<=i+k;j++)
		{
			if(j==1 || j==i+k)
			cout<<i;
			else
			cout<<" ";
		}
		cout<<endl;
	}
}







