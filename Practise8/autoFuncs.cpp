#include <iostream>

auto  max(auto x, auto  y){
    if (x > y)
        std::cout << x << " is greater than " << y << '\n';
    else
        std::cout << x << " is smaller than " << y << '\n';
}


int main(){

     
    max(2 ,3);
    max(2.6 ,3.55);
    max(6 ,3);
    max(5.4 ,3);


    return 0;
}