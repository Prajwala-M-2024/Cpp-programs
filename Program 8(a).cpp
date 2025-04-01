#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a='A';
	cout<<"Sl.No "<<setw(10)<<"Alphabets \n";
	for(int i=1;i<=26;i++)
	{
		cout<<i<<setw(10)<<a;
		cout<<a++;
	}
	return 0;
}
