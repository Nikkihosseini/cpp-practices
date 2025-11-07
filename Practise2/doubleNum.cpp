#include <iostream>
#include <string>

int main(){
    std::cout << "Enter an integer number:";
    int num{};
    std::cin >> num;
    std::cout << "double: " << num * 2;
}