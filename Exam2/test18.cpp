#include <iostream>


int main(){
    short a[] = {22, 33, 55 ,77 ,88};
    std::cout << "a = " << a  << '\t' << " *a = " << *a << '\n';

    for(short* p = a ; p < a + 5 ; p++){
        std::cout << "p = " << p  << '\t' << " *p = " << *p << '\n';
    }

    return 0;
}