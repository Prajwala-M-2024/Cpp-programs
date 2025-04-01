#include<iostream>
using namespace std;
int main()
{
	double voltage,armatureresistance,startingcurrent;
	cout<<"Enter the supply voltage(V) :";
	cin>>voltage;
	cout<<"Enter the armature resistance(R): ";
	cin>>armatureresistance;
	startingcurrent = voltage/armatureresistance;
	cout<<"The starting current of the DC motor is:"<<startingcurrent<<" A"<<endl;
	return 0;
}
