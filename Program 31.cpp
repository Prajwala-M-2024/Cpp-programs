#include<iostream>
using namespace std;
string arr[]={"voltage","current","power","frequency","power factor"};
string& change(int i)
{
	return arr[i];
}
int main()
{
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<endl;
	}
	change(2)="Active power ";
	change(4)="LPF ";
	cout<<"Array after change: "<<endl;
	for(int j=0;j<=5;j++)
	{
		cout<<arr[j]<<endl;
	}

	return 0;
}
