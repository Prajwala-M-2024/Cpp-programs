#include<iostream>
using namespace std;
int main()
{
	int speed,time,distance;
	cout<<"Enter the speed of light in km/s: "<<endl;
	cin>>speed;
	cout<<"Enter the time taken to travel in days: "<<endl;
	cin>>time;
	distance = time*24*60*60*speed;
	cout<<distance; 
}
