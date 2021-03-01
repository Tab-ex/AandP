#include <iostream>
#include <fstream>
using namespace std;


int main()
{ 
    system("color F3");
    float Length, width;
    ofstream f("1 weak 2 ex.txt");
    cout << "Length and width of the square : ";
    cin >> Length >> width;
    f   << "Length and width of the square : " << Length<<"\t" << width <<endl
        << "|square \t| "   <<   "\t|\n"
        << "|square area\t| " << Length * width<<"\t|\n"
        << "|perimeter\t| " << (Length + width)*2 << "\t|\n";
    f.close();

}

