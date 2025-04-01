#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	string SRN;
	float CGPA;
	Student(string n,string s,float c)
	{
		name=n;
		SRN=s;
		CGPA=c;
	}
	void display()
	{
		cout<<name<<" "<<SRN<<" "<<CGPA<<endl;
	}};
	int main()
	{
		Student S1("ABC","R22",7.8);
	    Student S2("XYZ","R23",8.2);
		S1.display();
		S2.display();
		return 0;
		}
