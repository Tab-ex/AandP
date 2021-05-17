#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	printf("Задание 12, Найти наибольший/наименьший элемент массива и его номер по порядку \n");
	const int c = 10;
	int arr[c];
	for (size_t i = 0; i <  c; i++)
	{
		arr[i] = (rand() % 21)-10;
	
		if (arr[i] % 2 == 0) 	arr[i] *= 2;
		if (arr[i] % 2 != 0) 	arr[i] *= 3;
			cout << arr[i] << endl;	
	}
	return 0;
}





