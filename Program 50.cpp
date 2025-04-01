#include<iostream>
using namespace std;
void floyd(int row)
{
	int a=1;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<a<<" ";
			a=a+1;
		}
	cout<<"\n";
	}
}
int main()
{
	int row=5;
	floyd(row);
	return 0;
}
