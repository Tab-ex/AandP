#include <iostream>


using namespace std;




int main()
{
	setlocale(LC_ALL, "Russian");


	printf("Задание 5, Найти наибольший/наименьший элемент массива и его номер по порядку \n");
	const int c = 10;
	int arr[c];
	int min = 11;
	int max = 0;
	int numMin, numMax;
	for (size_t i = 0; i <  c; i++)
	{
		arr[i] = (rand() % 21)-10;
		//cout << arr[i] << endl;
		if (arr[i] > max) 
		{ 
			max = arr[i];
			numMax = i;

		}
		if (arr[i] < min)
		{
			min = arr[i];
			numMin = i;
		}
		
	}



	cout << "Min "<< min <<" num "<<numMin<< endl;
	cout << "Max "<< max << " num " << numMax << endl;
	
	
	return 0;
}





