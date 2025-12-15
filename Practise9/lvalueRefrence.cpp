#include <iostream>


void change(int& a) {
    a = 100;
}

int main() {
    int x = 5;
    change(x);
    std::cout << x;   // 100

    return 0;
}
