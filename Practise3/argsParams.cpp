#include <iostream>
#include <string>


//  Arguments and parameters

int getUserNumber(){
    std::cout << "Enter Your Number:";
    int num{};
    std::cin >> num;
    return num;
}

void printResult(int num){
    std::cout << "Your Number is " << num << " ! and we now multiply it by 2 and the result is \n" << num * 2;
}

int main(){
    int num{getUserNumber()};
    printResult(num);
    return 0;
}