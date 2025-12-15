#include <iostream>

int main() {

    int x = 10;
    std::cout << &x << '\n'; // Address-of operator

    int y = 5;
    int& ref = y; //lvalue reference
    std::cout << y << '\n';

    int a = 5;   // 0101
    int b = 3;   // 0011
    int c = a & b;   // 0001 → 1 (Bitwise AND)
    std::cout << c << '\n';

    return 0;
}
