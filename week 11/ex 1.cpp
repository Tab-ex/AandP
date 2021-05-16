#include <iostream>

using namespace std;

struct point
{
	int x, y, step;
	float y1=0;
};

point one;
point two;
point three;
point four;

void f(int x, int y, int S)
{
	for (int i = x; i < y; i += one.step)
	{
		y = -2 * i * i + 3 * i - 1;

		cout << y << "\t" << i << endl;
	}

}

void F(int k1, int x1)
{
	for (int i = 2; i < three.y; i += 2)
	{
		three.y1 = three.y1 + 1.0 / (i * three.x);
	}
	cout << three.y1;
}

void F1(int k1, int x1)
{
	for (int i = 2; i < k1; i++)
	{
		four.y1 = four.y1 + 1.0 / (i * x1);
	}
	cout << four.y1;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		

		cout << ("Ведите Диапозон функции ");
		cin >> one.x;
		cin >> one.y;
		cout << ("Ведите шаг ");
		cin >> one.step;

		cout << ("y \t x\n");
		f( one.x, one.y, one.step);
		break;
	case 2:
		
		cout << ("Ведите Диапозон функции ");
		cin >> two.x;
		cin >> two.y;
		cout << ("Ведите шаг ");
		cin >> two.step;

		cout << ("y \t x\n");

		for (int i = two.x; i < two.y; i += two.step)
		{
			two.y1 = sqrt(2 + 3 * i) + 72 * i + tan(4 * i + 31);

			cout << two.y << "\t" << i << endl;
		}
		break;
	case 3:
		cout << ("Ведите значения K и X \n");
		cin >> three.y >> three.x;
		F(three.y, three.x);
		break;
	case 4:
		cout << ("Ведите значения K и X \n");
		cin >> four.y >> four.x;
		F1(four.y, four.x);
		break;
	}
	return 0;
}





