#include <iostream>


using namespace std;




int main()
{
	setlocale(LC_ALL, "Russian");


	printf("Задание 1с, вфвести мосив случайными числами от -10 до 10 \n");
	const int c = 10;
    int arr[c];
	for (size_t i = 0; i <  c; i++)
	{
		arr[i] = (rand() % 21)-10;
		cout << arr[i] << endl;
	}
	

	
	
	return 0;
}





