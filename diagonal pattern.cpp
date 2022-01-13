/*
*******
**   **
* * * *
*  *  *
* * * *
**   **
*******
*/
#include<iostream>
using namespace std;
#define n 11
int main()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n || i==j ||i==n-j+1)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
