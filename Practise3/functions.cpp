#include <iostream>

int numFive(){
    return 5;
}

void voidFunc(){
    std::cout << "Hello world!" << '\n';
}


int main(){
    voidFunc();
    numFive();
    std::cout << numFive() << '\n';
    std::cout << numFive() + 2 << '\n';
    return 0;
}
