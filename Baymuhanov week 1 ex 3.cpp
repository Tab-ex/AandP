#include <iostream>

int main()
{
    system("color F3");
    std::cout << "Lead your three numbers\n";
    float Num1, Num2, Num3;

    std::cin >> Num1 >> Num2>> Num3;
    std::cout << "average of numbers: " << (Num1 + Num2 + Num3) / 3 << "\n";
    std::cout << "difference of the doubled sum of the first and third numbers and tripled the second  numbers:"<<((Num1+Num3)*2)-(Num2*3) << "\n";
      

}