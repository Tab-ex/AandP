#include <iostream>
#include <cmath>

using namespace std;

int x1,x2,Step;
long float y;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << ("Ведите Диапозон функции ");
	cin >> x1;
	cin >> x2;
	cout << ("Ведите шаг ");
	cin >> Step;

   

	for (int i = x1; i < x2; i+=Step)
	{
		if (i > 0)
			cout << i;
		
		
	}

}

