#include <iostream>

int x = 10;

int main(){
    int x = 20;

    {
        int x = 30;
        std::cout << x << '\n';
    };

    std::cout << x << '\n';
    std::cout << ::x << '\n';


    return 0;
};