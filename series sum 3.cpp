#include<bits/stdc++.h>
using namespace std;
float fact(float n)
{
	if(n==1)
	return 1;
	return n*fact(n-1);
}
int main()
{
	int n,x;
	float i;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter x : ";
	cin>>x;
	float sum1=1,sum2=0;
	for(i=4;i<=n;i+=4)
	sum1+= pow(x,i)/fact(i);
	for(i=2;i<=n;i++)
	sum2+= pow(x,i)/fact(i);
	cout<<sum1-sum2;
}
