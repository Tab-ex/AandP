#include <iostream>
#include <fstream>


using namespace std;

void Fun()
{
	float x, y;
	ofstream fout("Ex 2.txt");
	cout << "Enter the number ";
	fout << "Enter the number ";
	cin >> x >> y;
	fout << x << " " << y << endl;

	if (x <= 0)
	{
		if ((y > x) && (y < 2 - x * x))
		{
			cout << "Yes, he does ";
			fout << "Yes, he does ";
		}
		else
		{
			cout << "No, he does ";
			fout << "No, he does ";
		}
	}
	else
	{

		if ((y < 2 - x * x) && (y > 0))
		{
			cout << "Yes, he does ";
			fout << "Yes, he does ";
		}
		else
		{
			cout << "No, he does ";
			fout << "No, he does ";
		}
	}}

int main()
{
	Fun();
}
