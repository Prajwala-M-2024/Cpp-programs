#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;
int main()
{
	int num = 50;
	cout<<"Before setting the width: \n"<<num<<endl;
	cout<<"Setting the width using setw to 5:\n"<<setw(5);
	cout<<num<<endl;
	return 0;
}
