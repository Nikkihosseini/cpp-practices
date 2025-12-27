#include <iostream>


int& max(int& m, int& n){
    return (m > n ? m : n); 
}

int main(){ 
    int m = 44, n = 22;

    std::cout << m << ", " << n << ", " << max(m,n) << '\n';

    max(m,n) = 55; 

    std::cout << m << ", " << n << ", " << max(m,n) << '\n';

    return 0;
}