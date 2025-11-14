#include <iostream>
#include <string>


int main(){
    
    char again;

    // User age


    do {
        std::cout << "Enter Your Age: ";
        int userAge{};
        std::cin >> userAge;

        if(userAge < 0){

            std::cout << "Invalid age! Please enter a positive number.\n";

        } else if(userAge >= 18){

            std::cout << "You are an Adult" << '\n';

        } else if(userAge < 18){

            std::cout << "You are a Teenager.\n";
        } 

        std::cout << "Do you want to try again? (y/n): ";
        std::cin >> again;

    } while (again == 'y' || again == 'Y');
   
    std::cout << "Thank You & GoodBye!";

    return 0;
}