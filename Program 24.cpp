#include<iostream>
using namespace std;
float max(float num1,float num2);
int main()
{
	float a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Max of 2 numbers is: "<<max(a,b);
	return 0;
}
float max(float num1,float num2)
{

	if(num1>num2)
	return num1;
	else 
	return num2;
}
