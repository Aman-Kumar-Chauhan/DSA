#include<bits/stdc++.h>
using namespace std;
void printEven(int n)
{
	if(n==0)
	return;
	printEven(n/3);
	
	cout<<n<<" + ";
}
int main()
{
	int n;
	cin>>n;
	cout<<"First "<<n<<" no.s of this series are\n";
	printEven(pow(3,n-1));
	cout<<"...";
}
