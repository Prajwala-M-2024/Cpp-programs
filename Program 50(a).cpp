#include<iostream>
using namespace std;
int main()
{
	int a=1;int row=5;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<a<<" ";
			a=a+1;
		}
	cout<<"\n";
}
	return 0;
}
