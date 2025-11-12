#include <iostream>


int main() {
    double num1, num2, result;
    char op;
    char again;

    do {

        std::cout << "Enter first number: ";
        std::cin >> num1;


        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    std::cout << "Error: Division by zero!\n";
                    continue;
                }
                break;
            default:
                std::cout << "Invalid operator!\n";
                continue;
        }

        std::cout << "Result: " << result << '\n';

        std::cout << "Do you want to calculate again? (y/n): ";
        std::cin >> again;

    } while (again == 'y' || again == 'Y');

    std::cout << "Goodbye!" << '\n';
    return 0;
}
