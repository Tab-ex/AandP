
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("1 weak 1 ex.txt");

    fout <<"**     **\n"
        << "**     **\n"
        << "*********\n"
        << "*********\n"
        << "**     **\n"
        << "**     **\n";
    fout.close();
    cout << ("Check the file: 1 weak 1 ex.txt")
    return 0;
}



