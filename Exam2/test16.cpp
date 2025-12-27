#include <iostream>



int main(){ 
    int n=44;

    int* pn = &n;


    std::cout << " n = " << n << '\n';

    std::cout << " &n = " << &n << '\n';

    std::cout << " *&n = " << *&n << '\n';

    std::cout << " *pn = " << *pn << '\n';

    std::cout << " &*pn = " << &*pn << '\n';


    return 0;
}