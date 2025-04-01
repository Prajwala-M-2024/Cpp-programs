#include<iostream>
using namespace std;
int main()
{
	int array[5]={5,10,15,20,25};
	cout<<"Array before removing element: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<" ";
		
    }
    
	for(int j=1;j<5;j++)
		{
			array[j]=array[j+1];
		}
		cout<<endl;
	cout<<"Array after removing element: "<<endl;
	for(int x=0;x<4;x++)
	{
	cout<<array[x]<<" ";
	
	}
	cout<<endl;
	return 0;
}
