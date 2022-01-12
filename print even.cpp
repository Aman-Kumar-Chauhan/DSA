#include<iostream>
using namespace std;
void printEven(int n)
{
	if(n==0)
	return;
	printEven(n-1);
	if(n%2==0)
	cout<<n<<" ";
}
int main()
{
	int n;
	cin>>n;
	cout<<"First "<<n<<" even no.s are\n";
	printEven(n*2);
}
