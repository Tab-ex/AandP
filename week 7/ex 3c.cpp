#include <iostream>

using namespace std;

int  k, x;
float y=0;
void F(int k1,int x1)
{
	for (int i = 2; i <k; i+=2)
	{
		y = y + 1.0/ (i * x);
	}
	cout << y;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << ("Ведите значения K и X \n");
	cin >> k>>x;
	F(k,x);
	return 0;
	
}





