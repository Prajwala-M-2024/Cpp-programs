#include<iostream>
using namespace std;
char arr[]={ 'a','b','c','x','y','a','f','e','a'};
char& change(int i)
{
	return arr[i];
}
int main()
{
	cout<<"Array before change: "<<endl;
	for(int i=0;i<=8;i++)
	{
		cout<<arr[i]<<endl;
	}
	for(int i=0;i<=8;i++)
	{
		if (arr[i]=='a')
		change(i)='z';
	}
	cout<<"Array after change: "<<endl;
	for(int j=0;j<=8;j++)
	{
		cout<<arr[j]<<endl;
	}

	return 0;
}
