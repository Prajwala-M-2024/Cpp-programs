#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,x,y,z;
	cout<<"Enter a number in radians: ";
	cin>>a;
	x = sin(a);
	cout<<"\nSine value of" <<a<<"is "<<x;
	y = cos(a);
	cout<<"\nCosine value of"<<a<<"is "<<y;
	z = tan(a);
	cout<<"\nTangent value of"<<a<<" is "<<z;
}
