#include<iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"The cube of "<<x<<"is"<<cube(x)<<endl;
	return 0;
}
