#include<iostream>
using namespace std;
class Room
{
	public:
	double length;
	double breadth;
	double height;
	double area()
	{
		return length * breadth;
	}
	double volume()
	{
		return length*breadth*height;
	}
};
int main()
{
	Room R1;
	R1.length=70.5;
	R1.breadth=35.4;
	R1.height=12;

cout<<"Area of room is: "<<R1.area()<<endl;
cout<<"Volume of room is: "<<R1.volume()<<endl;
return 0;
}
