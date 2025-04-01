#include<iostream>
using namespace std;
class Student
{
	public:
	string Name;
	string SRN;
	float CGPA;
	Student(string N,string S,float C)
	{
		Name=N;
		SRN=S;
		CGPA=C;
	}
	void display()
	{
		cout<<Name<<" "<<SRN<<" "<<CGPA;
	}};
	int main()
	{
		Student S1("ABC","R22",7.8);
		cout<<"Details of Student 1"<<endl;
		S1.display();
		return 0;
		}
