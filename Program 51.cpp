#include<iostream>
using namespace std;
void floyd(int row)
{
	for(int i=0;i<=row;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<i*j<<" ";
		}
	cout<<"\n";
	}
}
int main()
{
	int row=8;
	floyd(row);
	return 0;
}
