#include <iostream>


using namespace std;

struct robot
{
	float spead=0;
	float mass=0;
	float gabarite_X=0;
	float gabarite_Y=0;
	float gabarite_Z = 0;
};



int main()
{
	setlocale(LC_ALL, "Russian");

	robot robots[50];
	robots[0].spead = 1;
	robots[1].spead = 6;
	robots[2].spead = 3;
	float min_gabarite = robots[0].gabarite_X* robots[0].gabarite_Y* robots[0].gabarite_Z;
	int num;
	float gabarite;
	for (int i = 1; i < 50; i++)
	{
		gabarite = robots[i].gabarite_X * robots[i].gabarite_Y * robots[i].gabarite_Z;
		if (gabarite < min_gabarite)
		{
			min_gabarite =gabarite;
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





