#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[n]={};

	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<=n;i++)
	{
	   cin>>arr[i];
	}
	cout<<"Array elements are: ";
    for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;

}
