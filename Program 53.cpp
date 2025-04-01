#include<iostream>
using namespace std;
int main()
{
	string x;
	getline(cin,x);
	cout<<"My name is: ";
	cout<<x<<endl;
	x.push_back('M');
	cout<<"My name with initial is: ";
	cout<<x<<endl;
	x.pop_back();
	cout<<"My name without initial is: ";
	cout<<x<<endl;
	return 0;
}
