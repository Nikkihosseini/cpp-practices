#include <iostream>

// user age

int userAge();


int main(){
    int age = userAge();
    std::cout << "your age is " << age << " years old!" << '\n';
    return 0;
}


int userAge(){
    int age;

    while(true){
        std::cout << "Enter your age: " << '\n';
        std::cin >> age;

        if(age < 0 || age > 120){
            std::cout << "Invalid age, try again" << '\n';
        } else{
            return age;
        };

    }

}