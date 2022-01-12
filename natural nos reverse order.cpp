#include<iostream>
using namespace std;
void printNaturalReverse(int n)
{
	if(n==0)
	return;
	cout<<n<<" ";
	printNaturalReverse(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<"First "<<n<<" natural no.s in reverse order are\n";
	printNaturalReverse(n);
}
