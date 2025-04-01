#include<iostream>
using namespace std;
int add(int a, int b);
double add(double a,int b);
int add(int a,int b,int c);
int main()
{
	add(5,6);
	add(7.3,3);
	add(2,3,5);
	return 0;
}
int add(int a,int b)
{
	cout<<a+b<<endl;
}
double add(double a,int b)
{
	cout<<a+b<<endl;
}
int add(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
