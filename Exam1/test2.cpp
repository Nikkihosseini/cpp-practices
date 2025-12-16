#include <iostream>

void scores(int score){
       switch(score){
        case 10:
        case 9:
        case 8: 
            std::cout << "Grade A (Excellent)" << '\n';
           return;
        case 7:
        case 6:
        case 5: 
            std::cout << "Grade B (Very Good)" << '\n';
            return;
        case 4:
        case 3:
        case 2: 
        case 1: 
            std::cout << "Grade C (Good)" << '\n';
            return;
        default:
            if(score == 0){
                std::cout << "Grade F(Fail)" << '\n';
            }else{
                std::cout << "Invalid Score!" << '\n';
            }

    }

    std::cout << "Bye! Good Luck" << '\n';
}


int main(){
    int score;

    std::cout << "Enter your score (0-10): " << '\n';

    std::cin >> score ;

    scores(score);

    return 0;
}