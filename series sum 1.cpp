#include<iostream>
using namespace std;
int main()
{
	int i,n;
	float sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum += (1.0/(i*i));
	}
	cout<<"Sum of series 1 + 1/(2*2) + 1/(3*3) + ... + 1/(n*n) is : "<<sum;
}
