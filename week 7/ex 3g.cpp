#include <iostream>

using namespace std;

int  k, x;
float y=0;


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << ("Ведите значения K и X \n");
	cin >> k>>x;
	for (int i = 2; i <k; i++)
	{
		y = y + 1.0/ (i * x);
	}
	cout << y;
}





