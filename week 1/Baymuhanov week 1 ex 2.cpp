﻿#include <iostream>
using namespace std;


int main()
{ 
    system("color F3");
    float Length, width;
    cout << "Length and width of the square : ";
    cin >> Length >> width;
    cout << "|square \t| "   <<   "\t|\n"
        << "|square area\t| " << Length * width<<"\t|\n"
        << "|perimeter\t| " << (Length + width)*2 << "\t|\n";


}


