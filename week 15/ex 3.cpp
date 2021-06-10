#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int arr[100][100];
	

	printf("Вариант 3 задание 3 \nВ квадратной матрице, найти сумму отрицательных элементов, лежащих на главнойдиагонали\n");
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

	int sum_arr(0);
	for (size_t i = 0; i < size_arr; i++)
	{
		if (arr[i][i]<0)
		{
			sum_arr += arr[i][i];
		}
			
	}

	printf("Сумма равна: ");
	cout << sum_arr;

	return 0;
}



