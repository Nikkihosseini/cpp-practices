#include <iostream>
#include "userInfo.h"


int main(){
    std::string name = userName();
    int age = userAge();

    std::cout << "your Name is: " << name << '\n'; 
    std::cout << "And Your Age is: " << age;
    return 0;
}