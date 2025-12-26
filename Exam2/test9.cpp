#include <iostream>

void area(double& area , double& circumference , double r);

int main(){

    double a, c, r;

    std::cout << "Enter Radius: " << '\n';
    std::cin >> r;

    area(a ,c ,r);

    std::cout << "area = " << a << '\t' << "circumference = " << c << '\n';

    return 0;

};



void area(double& area , double& circumference , double r){

    const double pi = 3.14;
    area = pi*r*r;
    circumference = 2*pi*r;
};