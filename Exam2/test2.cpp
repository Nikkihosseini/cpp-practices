#include <iostream>

int cubs(int x){
    return x * x * x;
}

int main(){
    int x;

    std::cout << "Enter a number: " << '\n';
    std::cin >> x;
    std::cout <<  cubs(x);
   

    return 0;
}