#include <iostream>



int main(){ 
    int n=44;
    std::cout << " n = " << n << '\n';

    std::cout << " &n = " << &n << '\n';

    int* pn=&n; // pn holds the address of n
    
    std::cout << " pn = " << pn << '\n';

    std::cout << " &pn = " << &pn << '\n';

    std::cout << " *pn = " << *pn << '\n';

    int** ppn=&pn; // ppn holds the address of pn

    std::cout << " ppn = " << ppn << '\n';

    std::cout << " &ppn = " << &ppn << '\n';

    std::cout << " *ppn = " << *ppn << '\n';

    std::cout << "**ppn = " << **ppn << '\n';


    return 0;
}