#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,10,15,20,25};
	int sum = 0;
	for(int i=0;i<=4;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum of elements are: "<<sum;
	return 0;
}
