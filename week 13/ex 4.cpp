#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	printf("Задание 4, Найти наибольший/наименьший элемент массива и его номер по порядку \n");
	const int c = 10;
	int arr[c];
	int S1=1;
	int S2=1;
	int min = 11;
	int max = 0;
	int numMin, numMax;
	for (size_t i = 0; i <  c; i++)
	{
		arr[i] = (rand() % 21)-10;
		cout << arr[i] << endl;
		if (arr[i] > 0) 	S1 *= arr[i];
		if (arr[i] < 0) 	S2 *= arr[i];
			
		
		
	}
	cout << "произведение положительных заначаний "<< S1 << endl;
	cout << "произведение отрицательных заначаний "<< S2 << endl;
	
	return 0;
}





