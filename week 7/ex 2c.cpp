#include <iostream>

using namespace std;

int x1,x2,Step;
float y;

void f(int x,int y,int S)
{
for (int i = x; i < y; i+=Step)
	{
		y = -2*i*i+3*i-1;
		
		cout << y << "\t" << i << endl;
	}
	
}

int main()
{
	// Вариант С
	setlocale(LC_ALL, "Russian");

	cout << ("Ведите Диапозон функции ");
	cin >> x1;
	cin >> x2;
	cout << ("Ведите шаг ");
	cin >> Step;

    	cout << ("y \t x\n");
	f(int x,int y,int S);
	return 0;
	
	
}

