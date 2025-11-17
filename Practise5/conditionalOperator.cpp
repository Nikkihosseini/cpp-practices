#include <iostream>


int main(){
    
    double b1{100.0 - 99.99};
    double b2{10.0 - 9.99};

    if(b1 == b2){
        std::cout << "b1 == b2"<< '\n';
    } else if(b1 > b2) {
        std::cout << "b1 > b2"<< '\n';
    } else{
        std::cout << "b1 < b2"<< '\n';
    }

    std::cout << b1 << '\n' << b2;
        

    return 0;
}