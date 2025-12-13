
#include <iostream>


int return5(){
    return 5;
}


int main(){

    int x{5}; //rvalue

    const double d{1.2}; //rvalue

    int y{x}; //modifiable lvalue

    const double e {d}; //non-modifiable lvalue
    
    int z{ return5()}; // rvalue

    int w{x + 1}; // rvalue

    int q {static_cast<int>(d)}; // rvalue

    return 0;

}

