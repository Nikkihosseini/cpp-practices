#include <iostream>



int main(){

    int count{1};

    while (count <= 10){

        std::cout << "Hello world!" << '\n';
        ++count;
    }

    return 0;
}