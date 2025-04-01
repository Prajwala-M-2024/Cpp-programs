#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	float d;
	cout<<"Enter 2 integers: ";
	cin>>a>>b;
	cout<<"Enter the operator: ";
	cin>>c;
    switch(c)
	{
	case'+': 
		cout<<"Addition of "<<a<<" & "<<b<<"is "<<a+b;
        break;
    case'-':
		cout<<"Subtraction of"<<a<<" & "<<b<<"is "<<a-b;
        break;
    case'*':
		cout<<"Multiplication of "<<a<<" & "<<b<<"is "<<a*b;
        break;
    case'/':
		cout<<"Division of "<<a<<" & "<<b<<"is "<<a/b;
        break;
	default:
		cout<<"Operator is invalid "<<endl;
	}
	return 0;
}
