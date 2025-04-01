#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n[10];
	for(int i=0;i<10;i++)
	{
		n[i]= i+100;
	}
	cout<<"Element"<<setw(15)<<"value"<<endl;
	for(int j=0;j<10;j++)
	{
		cout<<setw(2)<<j<<setw(18)<<n[j]<<endl;
	}
	return 0;
}
