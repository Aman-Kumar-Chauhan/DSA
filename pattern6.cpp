/*
    1
   321
  54321
 7654321
987654321
*/
#include<iostream>
using namespace std;
#define n 9
int main()
{
	int i,j;
	for(i=1;i<=n;i+=2)
	{
		for(j=1;j<=n-i;j+=2)
		cout<<" ";
		for(j=i;j>0;j--)
		cout<<j;
		cout<<endl;
	}
}
