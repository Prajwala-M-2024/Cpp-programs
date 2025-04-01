#include<iostream>
using namespace std;
class Display
{
	public:
	int x;
	int y;
	Display()
	{
		x=30;
		y=20;
	}
int getA()
{
	return x;
}
int getB()
{
	return y;
}};
int main()
{
	Display p1;
	cout<<"p1.x= "<<p1.getA()<<endl<<"p1.y= "<<p1.getB();
	return 0;
}

