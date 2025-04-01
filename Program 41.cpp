#include<iostream>
using namespace std;
class Student
{
	public:
	string Name;
	string SRN;
	float CGPA;
	Student()
	{
		Name="XYZ";
		SRN="R70";
		CGPA=9.7;
	}
void display()
{
	cout<<Name<<" "<<SRN<<" "<<CGPA<<endl;}
};
	int main()
	{
	Student S1;
	cout<<"Details of Student 1"<<endl;
	S1.display();
	return 0;
	}	

