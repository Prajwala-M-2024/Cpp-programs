#include<iostream>
using namespace std;
int main()
{
	int arr[5]={5,10,15,20,25};
	int sum = 0;
	float avg = 0;
	for(int i=0;i<=4;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum of elements are: "<<sum<<endl;
	cout<<"The average of elements are: "<<sum/5;
	return 0;
}
