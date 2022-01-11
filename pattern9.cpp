/*
E       E
 D     D
  C   C
   B B
    A
*/
#include<iostream>
using namespace std;
#define n 9
int main()
{
	int i,j,l;
	char k;
	for(k='E',i=0,l=n;k>='A';k--,i++,l-=2)
	{
		for(j=0;j<i;j++)
		cout<<" ";
		for(j=1;j<=l;j++)
		{
			if(j==1 || j==l)
			cout<<k;
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
