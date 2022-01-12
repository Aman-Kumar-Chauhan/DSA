#include<iostream>
using namespace std;
void printNatural(int n)
{
	if(n==0)
	return;
	printNatural(n-1);
	cout<<n<<"^"<<n<<" + ";
}
int main()
{
	int n;
	cin>>n;
	cout<<"First "<<n<<" natural no.s are\n";
	printNatural(n);
	cout<<"...";
}
