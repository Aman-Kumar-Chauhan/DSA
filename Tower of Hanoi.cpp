#include<iostream>
using namespace std;

void TOH(int n,string s,string d,string aux)
{
	if(n==0)
	return;
	TOH(n-1,s,aux,d);
	cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
	TOH(n-1,aux,d,s);
}

int main()
{
	int n;
	cout<<"Enter no. of disks: ";
	cin>>n;
	TOH(n,"Source","Destination","Auxiliary");
}
