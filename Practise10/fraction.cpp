#include <iostream>

struct Fraction{
    int numerator;
    int denominator;
};


Fraction add(Fraction a, Fraction b) {
    Fraction result = Fraction a + Fraction b;
    return result;
};


int main(){

    Fraction f1{2, 4};
    Fraction f2{8, 9};

    std::cout << "جمع: ";
    add(f1, f2);
   

}