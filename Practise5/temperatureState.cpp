#include <iostream>
#include <string>

int main() {
    int temp{};

    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if (!temp) {
        std::cout << "Invalid input! Please enter a number." << '\n';
        return 0;
    }

    std::string state =
        (temp < 0) ? "Solid (Ice)" :
        (temp >= 0 && temp < 100) ? "Liquid (Water)" :
        (temp >= 100) ? "Gas (Vapor)" :
        "Undefined";

    std::cout << "State of matter: " << state << '\n';

    return 0;
}
