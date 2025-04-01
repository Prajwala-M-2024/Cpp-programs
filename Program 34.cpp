#include<iostream>
using namespace std;
float interest(int x, int y, float z=0.1)
{
	return(x+(x*y*z));
}
int main()
{
	float x;int y;
	cout<<"Enter the initial amount :";
	cin>>x;
	cout<<"Enter the number of years in integers:";
	cin>>y;
	cout<<"The maturity amount is: "<<interest(x,y)<<endl;
	return 0;
}
