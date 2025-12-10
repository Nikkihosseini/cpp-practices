#include <iostream>

void print(int z = 5 , int x = 22 , int y = 20){
    std::cout << z << '\t' <<  x << '\t' << y << '\t' << '\n';
}


int main(){

    print(1 , 2 , 3);
    print(1 , 2);
    print(1);
    print();

    return 0;
}