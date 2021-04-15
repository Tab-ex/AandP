#include <iostream>

using namespace std;

int i, k, n;

F()
{ 	
	k = 0;
	for (int i = 100; i < 1000; i++) 
	{
		if (i / 100 + (i  %100 )/ 10 + i %10 == n) 
		{
			k++;
		}
	}
	cout << k;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << ("ведите значения");
	cin >> n;
	F();
	return 0;
	
}





