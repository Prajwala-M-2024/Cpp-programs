#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
	int x,y,z;
	cout<<"Enter 2 integers: ";
	cin>>x>>y;
	z=add(x,y);
	cout<<"Addition of 2 integers is: "<<z;
	return 0;
}
int add(int a,int b)
{
return a+b;
}
