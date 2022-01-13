/*

*
 **
  ***
   ****
    *****
   ****
  ***
 **
*

*/
#include<iostream>
using namespace std;
#define n 8
int main()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<i;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
}
