#include <iostream>


using namespace std;

struct robot
{
	float spead=0;
	float mass=0;
	float gabarite_X=0;
	float gabarite_Y=0;

};



int main()
{
	setlocale(LC_ALL, "Russian");

	robot robots[50];
	robots[0].spead = 1;
	robots[1].spead = 6;
	robots[2].spead = 3;
	float Max_spead = robots[0].spead;
	int num;
	for (int i = 1; i < 50; i++)
	{
		if (robots[i].spead> Max_spead)
		{
			Max_spead = robots[i].spead;
			num = i;
		}
	}
	cout <<"номер " <<num<<endl
		<< "скорость " << robots[num].spead << endl
		<< "масса " << robots[num].mass << endl
		<< "габариты по х " << robots[num].gabarite_X << endl
		<< "габариты по у " << robots[num].gabarite_Y;
	return 0;
}





