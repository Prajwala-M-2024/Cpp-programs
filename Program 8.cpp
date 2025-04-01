#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int i=1;i<=26;i++)
	{
	
	cout<<setw(1)<<i<<' ';
	cout<<setw(4)<<char('A' +i-1)<<'\n';
}
	return 0;
}
