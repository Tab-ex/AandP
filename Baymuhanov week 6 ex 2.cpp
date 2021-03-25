#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;


int main()
{
	float x, y;
	ofstream fout("Ex 2.txt");
	cout << "Enter the number ";
	fout << "Enter the number ";
	cin >> x >> y;
	fout << x << " " << y << endl;

	
	float l = sqrt(x * x + (y-1)* (y - 1));
		if ((l<1) && (y < 1 - x * x))
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
