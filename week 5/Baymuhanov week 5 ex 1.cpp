#include <iostream>
#include <fstream>


using namespace std;

void Fun()
{
	float x, y;
	ofstream fout("Ex 1.txt");
	cout << "Enter the number ";
	fout << "Enter the number ";
	fout << x << endl;
	cin >> x ;
	if (x == 0) 
	{
		y = -2;
		cout << y;
		fout << y << endl;
	}
	else if (x < 0)
	{
		x *= -1;
		y =2* (x+4) -6;
		cout << y;
		fout << y << endl;
	}
	else 
	{
		y = x * 1.5 + 5;
		cout << y;
		fout << y << endl;
	}
}

int main()
{
	Fun();
}
