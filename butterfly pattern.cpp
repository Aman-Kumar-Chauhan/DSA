/*
1   7
12  67
123 567
1234567
123 567
12  67
1   7
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1,k=7;i<=3;i++,k--)
	{
		for(j=1;j<=i;j++)
		cout<<j;
		while(j<5)
		{
			cout<<" ";
			j++;
		}
		for(j=k;j<=7;j++)
		cout<<j;
		cout<<endl;
	}
	
	for(i=1;i<=7;i++)
	cout<<i;
	cout<<endl;
	
	for(i=3,k=5;i>=1;i--,k++)
	{
		for(j=1;j<=i;j++)
		cout<<j;
		while(j<5)
		{
			cout<<" ";
			j++;
		}
		for(j=k;j<=7;j++)
		cout<<j;
		cout<<endl;
	}
}
