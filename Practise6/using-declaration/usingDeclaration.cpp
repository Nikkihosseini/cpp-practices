
#include <iostream>
#include "usingDeclaration.h"

using std::cout;

int add(int a, int b) { 
    return a + b; 
}

int sub(int a, int b) { 
    return a - b; 
}

int mul(int a, int b) { 
    return a * b; 
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: division by zero!\n";
        return 0;
    }

    return (double)a / b;
}
