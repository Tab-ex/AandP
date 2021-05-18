#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

struct Student
{
	string name;
	int appraisalMath;
	int appraisalPhysics;
	int appraisalInfor;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	printf("Задание 17, Имеется информация по итогам экзаменов в институте всего в списке N человек.\n По каждому из студентов имеются следующие сведения :\n фамилия, оценка по математике, оценка по информатике и оценка по физике. : \n\n");
	
	string Names[7] = {"Dima", "Nikta", "Vasya","Vova","Sacha","Lena","Anya"};

	const int c = 1000;

	Student Students[c];

	int num = 0;

	for (size_t i = 0; i <  c; i++)
	{
		Students[i].name = Names[rand()%7];
		Students[i].appraisalInfor = (rand() % 2) + 4;
		Students[i].appraisalMath = (rand() % 3) + 3;
		Students[i].appraisalPhysics = (rand() % 2) + 4;
		if ((Students[i].appraisalInfor + Students[i].appraisalMath + Students[i].appraisalPhysics) == 15) {
			num++; 
			cout << i << ") " << Students[i].name << endl;
			//cout << i << ") " << Students[i].name<<"\t" << Students[i].appraisalInfor << "\t" << Students[i].appraisalMath << "\t" <<Students[i].appraisalPhysics << "\t" << endl;
	
		}
		}
	cout << "Всего " << num << " отличников\n";
	return 0;
}





