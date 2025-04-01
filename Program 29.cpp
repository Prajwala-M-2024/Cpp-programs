#include<iostream>
using namespace std;
int& change(int arr[],int i)
{
	return arr[i];
}
int main()
{
	int arr[6]={1,2,3,4,5,6};
	cout<<"Array before change: "<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<arr[i]<<endl;
	}
	change(arr,1)=10;
	change(arr,4)=12;
	cout<<"Array after change: "<<endl;
	for(int j=0;j<=5;j++)
	{
		cout<<arr[j]<<endl;
	}

	return 0;
}
