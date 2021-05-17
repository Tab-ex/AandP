#include <iostream>


using namespace std;




int main()
{
	setlocale(LC_ALL, "Russian");


	printf("Задание 2с, Вычислить сумму элементов массива\n");
	const int c = 10;
	int arr[c];
	int sum = 0;
	for (size_t i = 0; i <  c; i++)
	{
		arr[i] = (rand() % 21)-10;
		cout << arr[i] << endl;
		if (arr[i] < 5 || arr[i]>6)sum += arr[i];

	}
	cout << sum << endl;

	
	
	return 0;
}





