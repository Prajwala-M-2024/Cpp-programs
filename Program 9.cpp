#include<iomanip>
#include<ios>
#include<iostream>
using namespace std;
int main()
{
	string Name,SRN;
	float Marks;
	cout<<"Enter Name: \n"<<"Enter SRN: \n"<<"Enter Marks: \n";
	cin>>Name>>SRN>>Marks;
	cout<<"Name"<<setw(10)<<"SRN"<<setw(10)<<"Marks"<<endl;
	for(int i=1;i<=3;i++)
	cout<<Name<<setw(10)<<SRN<<setw(10)<<Marks<<endl;
	
	
}
