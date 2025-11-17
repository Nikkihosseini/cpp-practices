#include <iostream>


int main(){
    constexpr bool isCold{true};
    int heaterStatus{isCold ? 1 : 0};

    std::cout << "Heater Status: " << heaterStatus << '\n';

    return 0;
}