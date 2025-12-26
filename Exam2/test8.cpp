#include <iostream>

void exchangesNumbers(int& x , int& y);


int main(){
    int a = 55;
    int b = 20;

    std::cout << a << '\t' << b << '\n';

    exchangesNumbers(a , b);

    std::cout << a << '\t' << b << '\n';

    return 0;
};

void exchangesNumbers(int& x , int& y){
    int exchanges = x;
    x = y;
    y = exchanges;
};