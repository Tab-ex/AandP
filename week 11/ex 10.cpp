#include <iostream>


using namespace std;

struct plane
{
	float spead=0;
	float rad=0;
	float koof=0;
	
};



int main()
{
	setlocale(LC_ALL, "Russian");

	plane one;
	printf("ведите скорость радиус и коофициент винта ");
	cin >> one.spead >> one.rad >> one.koof;
	printf("тяга: ");
	cout<<one.spead * one.rad * one.koof;
	
	
	return 0;
}





