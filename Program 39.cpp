#include<iostream>
using namespace std;
class Car
{
	public:
	string Brand;
	string Colour;
	string Model;
};
int main()
{
	Car C1;
	Car C2;
	C1.Brand="Suzuki";
	C1.Model="Swift";
	C1.Colour="Black";
	
	C2.Brand="TATA";
	C2.Model="Nexon";
	C2.Colour="Blue";
	cout<<"Information of first car"<<endl<<C1.Brand<<" "<<C1.Model<<" "<<C1.Colour<<endl;
	cout<<"Information of second car"<<endl<<C2.Brand<<" "<<C2.Model<<" "<<C2.Colour<<endl;
	return 0;
}
