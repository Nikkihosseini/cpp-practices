#include <iostream>


int main(){
    int x{5};

    int y{x}; // x => lvalue
    int z{25}; // 25 => rvalue

    return 0;
}