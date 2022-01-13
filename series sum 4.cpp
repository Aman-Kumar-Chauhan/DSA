#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0,n,count=1;
	cin>>n;
	while(count<=n)
	{
		if(count%2==0)
		i*=2;
		else
		i+= i/2;
		cout<<i<<" ";
		sum+=i;
		count++;
	}
	cout<<"\nSum = "<<sum;
}
