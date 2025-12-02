#include <iostream>
#include "usingDeclaration.h"


int main(){
    using std::cout;
    using std::cin;

    int x, y;
    char op;

    cout << "Enter number 1: ";
    cin >> x;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    cout << "Enter number 2: ";
    cin >> y;

    switch (op) {
        case '+': 
            cout << add(x, y) << '\n'; 
        break;
        case '-': 
            cout << sub(x, y) << '\n'; 
        break;
        case '*': 
            cout << mul(x, y) << '\n'; 
        break;
        case '/': 
            cout << divide(x, y) << '\n'; 
        break;

        default: 
        cout << "Invalid operator!" << '\n';
    }
    return 0;
}