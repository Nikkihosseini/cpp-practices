#include <iostream>


int main(){

    float x = 0;    
    float* p = &x;
    *p = 3.14159; 

    std::cout << "x = " << x << '\n';
    std::cout << "&x = " << &x << '\n';
    std::cout << "*p = " << *p << '\n';
    std::cout << "&p = " << &p << '\n';
 

    return 0;
}