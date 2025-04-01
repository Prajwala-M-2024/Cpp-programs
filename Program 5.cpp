#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int a=7;
	cout<<a<<endl;
	cout<<setw(5)<<a<<endl;
	cout<<setw(10)<<a<<endl;
	cout<<setw(15)<<a<<endl;
	cout<<setw(10)<<a<<endl;
	cout<<setw(5)<<a<<endl;
	cout<<setw(0)<<a<<endl;
	return 0;
}
