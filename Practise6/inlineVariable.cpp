#include <iostream>
#include "inlineVariable.h"


int main(){
    std::cout << "Enter the radius: " << '\n';
    int radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << (constants::doubleNumber * radius ) * constants::pi << '\n';

    return 0;
}