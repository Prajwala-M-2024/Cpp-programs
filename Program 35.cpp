#include<iostream>
using namespace std;
float fees(float f,float y, float r= 0.05)
{
	for (int i=1;i<=y;i++)
	return f=f+(f*r);
}
int main()
{
	float f;float y;
	cout<<"Enter the 1st year fees: ";
	cin>>f;
	cout<<"Enter the number of years: ";
	cin>>y;
	cout<<"The"<<y<<"year fees is: "<<fees(f,y)<<endl;
	return 0;
}
