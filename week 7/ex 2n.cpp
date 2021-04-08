#include <iostream>
#include <cmath>

using namespace std;

int x1,x2,Step;
long float y;

int main()
{
	// Вариант N
	setlocale(LC_ALL, "Russian");

	cout << ("Ведите Диапозон функции ");
	cin >> x1;
	cin >> x2;
	cout << ("Ведите шаг ");
	cin >> Step;

    cout << ("y \t x\n");

	for (int i = x1; i < x2; i+=Step)
	{
		y = sqrt(2+3*i)+72*i+tan(4*i+31);
		
		cout << y << "\t" << i << endl;
	}

}

