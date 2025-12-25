#include <iostream>

void printDate(int d , int m , int y);


int main(){
  
    int day ,month ,year;
    char again;

    do{
        std::cout << "Enter today's date: " << '\n';
        std::cin >> day >> month >> year ;
        printDate(day, month, year);
        std::cout << "Would you like to try again? y or n?" << '\n';
        std::cin >> again;

    } while(again == 'y' || again == 'Y');

     std::cout << "Good bye!" << '\n';

    return 0;
}


void printDate(int d , int m , int y){
    if(d > 0 && d <= 31 && m > 0 && m <= 12 && y > 0){
        std::cout << d << " ";
        switch (m){
            case 1: std::cout << "Farvadin ";
            break;
            case 2: std::cout << "Ordibehesht ";
            break;
            case 3: std::cout << "Khordad ";
            break;
            case 4: std::cout << "Tir ";
            break;
            case 5: std::cout << "Mordad ";
            break;
            case 6: std::cout << "Shahrivar ";
            break;
            case 7: std::cout << "Mehr ";
            break;
            case 8: std::cout << "Aban ";
            break;
            case 9: std::cout << "Azar ";
            break;
            case 10: std::cout << "Dey ";
            break;
            case 11: std::cout << "Bahman ";
            break;
            case 12: std::cout << "Esfand ";
            break;
        }
        std::cout << y << " " << '\n';
    }else{
        std::cout << "Incorrect amount, please try again!" << '\n';
    }
};