#include<iostream>
using namespace std;
int max(int&a,int&b);
int main()
{
	int x,y;
	cout<<"Enter two integers: ";
	cin>>x>>y;
	max(x,y);
	cout<<"x value is: "<<x<<endl;
	cout<<"y value is: "<<y;
	return 0;
}
int max(int&a,int&b)
{
if(a<b)
{
	int c=a;
	a=b;
	b=c;
}
else
{
	a=a;
	b=b;
}

}

