#include<iostream>
using namespace std;
int main()
{
	double length, breadth; 
	int area;
	cout<<"The length of the rectangle is:";
	cin>>length;
	cout<<"The breadth of the rectangle is: ";
	cin>>breadth;
	area= int(length)*breadth;
	cout<<"The area of the rectangle: "<<area<<endl;
	float res;
	cout<<"\n\n The length of the rectangle is: "<<length<<endl;
	cout<<"The breadth of the rectangle is : "<<breadth<<endl;
	res = (float)length*breadth;
	cout<<"The area of the rectangle is: "<<res<<endl;
	
}
