#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int arr[100][100];
	int arr_max[100];
	

	printf("Вариант 3 задание 6 \nДана матрица. Составить массив, каждый элемент которого равен максимальному элементу соответствующей строки матрица\n");
	printf("Ведите размер квадратной матрици\n");
	
	int size_arr;
	cin >> size_arr;
	
	
	for (size_t i = 0; i < size_arr; i++)
	{
		for (size_t j = 0; j < size_arr; j++)
		{
			arr[i][j] = (rand() % 100) - 50;
		}
	}

	
	for (size_t i = 0; i < size_arr; i++)
	{
		arr_max[i] = arr[i][0];
		for (size_t j = 0; j < size_arr; j++)
		{
			if (arr[i][j]> arr_max[i])
			{
				arr_max[i] = arr[i][j];
			}
		}
			
	}

	printf("Максимальное число с троках масива\n");
	for (size_t i = 0; i < size_arr; i++)
	{
		cout << arr_max[i] << endl;
	}

	return 0;
}



