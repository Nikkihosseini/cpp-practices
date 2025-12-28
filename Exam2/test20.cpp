#include <iostream>


int main(){
    int n = 50;
    int* pn = &n;

    std::cout << "n = " << n << '\t';
    std::cout << "&n = " << &n << '\n';
    std::cout << "*(&n) = " << *(&n) << '\n';
    std::cout << "&(*(&n)) = " << &(*(&n)) << '\n';

    std::cout << "*pn = " << *pn << '\t';
    std::cout << "&pn = " << &pn << '\n';

    return 0;
}