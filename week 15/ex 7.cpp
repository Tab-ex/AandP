#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int arr[2][30];
	int arr_max[100];
	

	printf("Вариант 3 задание 7 \n. Дана матрица. Элементы первой строки — количество осадков в соответствующий день,\n второй строки — сила ветра в этот день.Найти, был ли в эти дни ураган ?\n(ураган — когда самый сильный ветер был в самый дождливый день)\n\n");
	
	
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 30; j++)
		{
			arr[i][j] = (rand() % 25);
		}
	}

	
	int rain;
	int wind;
	for (size_t i = 0; i < 2; i++)
	{
		arr_max[i] = arr[i][0];
		for (size_t j = 0; j < 30; j++)
		{
			if (arr[i][j]> arr_max[i])
			{
				arr_max[i] = arr[i][j];
				if (i==0)
				{
					rain = j;
				}
				else
				{
					wind = j;
				}
			}
		}
			
	}

	if (rain==wind)
	{
		printf("В эти дни был уроган\n");
	}
	else
	{
		printf("В эти дни не был уроган\n");

	}
	
	return 0;
}



