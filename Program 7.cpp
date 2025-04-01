#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number : ";
	cin>>a;
	for(int i=1;i<=10;i++)
	cout<<a<<setw(5)<<"*"<<setw(5)<<i<<setw(5)<<"="<<setw(5)<<a*i<<endl;
}
