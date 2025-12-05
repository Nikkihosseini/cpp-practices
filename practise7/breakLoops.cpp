#include <iostream>



int main(){

    for(int i{1}; i <= 20 ; ++i){
        if(i == 15)
            break;
        
        std::cout << i << '\n';
    }

     std::cout << "Oops! We break the loop!" << '\n';

    return 0;
}