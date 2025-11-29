#include <iostream>
#include "math.h"


int main(){

    int x;
    int y;

    std::cout << "Enter Two nubmer: " << '\n';
    std::cin >> x >> y;

    std::cout << plusnums::plus(x , y) << '\n';

    return 0;
}