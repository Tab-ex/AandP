#include <iostream>
#include <fstream>
int main()
{
    system("color F3");
    std::ofstream f("1 weak 3 ex.txt");
    std::cout << "Lead your three numbers\n";
    float Num1, Num2, Num3;

    std::cin >> Num1 >> Num2>> Num3;
    f         << "Lead your three numbers\t" << Num1 << "\t" << Num2 << "\t" << Num3 << std::endl
              << "average of numbers: " << (Num1 + Num2 + Num3) / 3 << "\n"
              << "difference of the doubled sum of the first and third numbers and tripled the second  numbers:"<<((Num1+Num3)*2)-(Num2*3) << "\n";
      
    f.close();
}