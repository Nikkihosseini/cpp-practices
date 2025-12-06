#include <iostream>
#include <typeinfo>


int main(){

    // Loest To highest
    /*
    int
    unsigned int
    long
    unsigned long
    long long
    unsigned long long
    float
    double
    long double
    */ 

    int i{2};
    double d{3.5};

    std::cout << typeid(i + d).name();
    
    return 0;
}