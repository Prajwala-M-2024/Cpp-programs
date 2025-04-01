#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter dividend: ";
	cin>>a;
	cout<<"Enter divisor: ";
	cin>>b;
	c = a/b;
	cout<<"Quotient = "<<c;
	d = a%b;
	cout<<"\n Remainder = "<<d;
	return 0;
}
