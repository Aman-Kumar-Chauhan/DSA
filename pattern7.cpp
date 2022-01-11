/*
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/
#include<iostream>
using namespace std;
#define n 6
int main()
{
	int i,j;
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=i;j--)
		cout<<j;
		cout<<endl;
	}
	for(i=1;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		cout<<j;
		cout<<endl;
	}
}
