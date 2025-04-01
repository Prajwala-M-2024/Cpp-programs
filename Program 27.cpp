#include<iostream>
using namespace std;
void salary(float&a);
int main()
{
	float a;
	cout<<"Enter the salary: ";
	cin>>a;
	cout<<"Salary before increment: "<<a;
	salary(a);
	cout<<"\nSalary after increment: "<<a;
	return 0;
}
void salary(float&a)
{
	a =a+a*0.1;
}
