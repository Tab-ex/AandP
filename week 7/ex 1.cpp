#include <iostream>

using namespace std;

void F(int x)
{
	for (size_t i = 0; i <= x; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			cout << ("0");
		}
		cout<<endl;
	}
}

int x;

int main()
{
	cout << ("Input number of lines ");
	cin >> x;
	
return 0;
}

