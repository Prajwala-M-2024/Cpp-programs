#include<iostream>
using namespace std;
int arth(int a,int b);
int main()
{
	int x,y;
	cout<<"Enter 2 integers: ";
	cin>>x>>y;
	arth(x,y);
	return 0;
}
int arth(int a,int b)
{
	cout<<"Addition of 2 integers: "<<a+b<<endl;
	cout<<"Subtraction of 2 integers: "<<a-b<<endl;
	cout<<"Multiplication of 2 integers: "<<a*b<<endl;
	cout<<"Division of 2 integers: "<<a/b<<endl;
}
