#include<iostream>
using namespace std;
void salary(int&a,int&b);
int main()
{
	int x,y;
	cout<<"Enter 2 numbers: ";
	cin>>x>>y;
	cout<<"Value before swapping: "<<x<<" "<<y;
	swap(x,y);
	cout<<"\nValue after swapping: "<<x<<" "<<y;
	return 0;
}
void swap(int&a,int&b)
{
	int z=a;
	a=b;
	b=z;
}
