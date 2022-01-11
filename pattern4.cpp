/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<iostream>
using namespace std;
#define n 5
int main()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<"* ";
		cout<<endl;
	}
}
