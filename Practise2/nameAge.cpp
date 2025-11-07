#include <iostream>
#include <string>


// cout & cin > Output & Input


int main(){
    std::cout << "Enter your Name & your Age:";
    std::string name{};
    int age{};
    std::cin >> name >> age ;
    std::cout << "Hi " << name << "! your age is: " << age << " years old!";
    return 0;
}