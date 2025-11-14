#include <iostream>
#include <string>
#include <typeinfo>


int main(){
    //  Length()
    std::string name{"Nikki"};
    std::cout << name.length() << " " << typeid(name).name() << '\n';
    int nameInt{static_cast<int>(name.length())}; // change type from string to int, using static_cast<type>(expression)
    std::cout << nameInt << " " << typeid(nameInt).name() <<'\n';


    // ssize
    std::string user{"Nikki"};
    std::cout << std::ssize(name) << " " << typeid(user).name() << '\n';
    int userInt{static_cast<int>(name.length())}; // change type from string to int, using static_cast<type>(expression)
    std::cout << userInt << " " << typeid(userInt).name() <<'\n';


    return 0;
}