#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	printf("Задание 14, Создать новый массив из двух других массивов путём операций сложения над элементами массивов: \n");
	const int c = 10;
	int Two[c];
	int One[c];
	int Three[c];

	for (size_t i = 0; i <  c; i++)
	{
		One[i] = (rand() % 21)-10;
		Two[i] = (rand() % 21) - 10;
		Three[i] = Two[i] + One[i];
			cout << Three[i] << endl;	
	}
	return 0;
}





