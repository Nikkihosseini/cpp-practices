#include <iostream>

template <typename T>

void max(T x, T y){
    if (x > y)
        std::cout << x << " is greater than " << y << '\n';
    else
        std::cout << x << " is smaller than " << y << '\n';
}


int main(){

     
    max<int>(2 ,3);
    max<double>(2.6 ,3.55);
    max<double>(6 ,3);


    return 0;
}