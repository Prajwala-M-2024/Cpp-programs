#include<iostream>
using namespace std;
int max(int num1,int num2);
int main()
{
	int num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	if(num1>num2)
	{
		cout<<"Max is : "<<num1;
	}
	else
	{
		cout<<"Max is : "<<num2;
	}
return 0;
}
