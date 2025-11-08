#include <iostream>
#include <string>


int getUserNumber(){
    std::cout << "Enter Your Number:";
    int num{};
    std::cin >> num;
    return num;
}

int main(){
    int num{getUserNumber()};
    std::cout << "Your Number is " << num << " ! and we now multiply it by 2 and the result is \n" << num * 2;
    return 0;
}