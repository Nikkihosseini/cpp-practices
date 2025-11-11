#include <iostream>
#include <string>
#include "userInfo.h"


std::string userName(){
    std::cout << "Enter your Name: \n";
    std::string name;
    std::cin >> name;
    return name;
}


int userAge(){
    std::cout << "Now, Enter your age: \n";
    int age{};
    std::cin >> age;
    return age;
}


