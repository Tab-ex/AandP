#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;


int main()
{
	float x, y;
	bool u = true;
	ofstream fout("Ex 2.txt");
	
	while (u)
{
		cout << "Enter the number " ;
	cin >> x;
	fout << "Enter the number ";
	fout << x << endl;
	
	if (x > 5)
	{
		y = 2 * (x * x) + 10;
		cout << y;
		fout << y << endl;
		u = !u;
	}
	else if (x == 0)
	{
		y = 0;
		cout << y;
		fout << y << endl;
		u = !u;
	}
	else if (x < 5)
	{
		x *= -1;
		y = 2 * (x + 6) - x * x;
		fout << y << endl;
		cout << y;
		u = !u;
	}
	
	else
	{
		cout << "Try another number\n";
		fout << "Try another number\n";
	}
}
}