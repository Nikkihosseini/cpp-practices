#include <iostream>

int max(int x , int y){
    int max = (x > y) ? x : y;
    return max;
}

int main(){
    int m,n;

    do{
        std::cout << "Enter two Number: " << '\n';
        std::cin >> m >> n;
        std::cout << "max(" << m << " or " << n << ") = " << max(m,n) << '\n';

    }while(m != 0);


    return 0;
}