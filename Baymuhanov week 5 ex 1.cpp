#include <iostream>
#include <fstream>


using namespace std;


int main()
{
	float x, y;
	cin >> x ;
	if (x == 0) 
	{
		y = -2;
		cout << y;
	}
	else if (x < 0)
	{
		x *= -1;
		y =2* (x+4) -6;
		cout << y;
	}
	else 
	{
		y = x * 1.5 + 5;
		cout << y;
	}
}