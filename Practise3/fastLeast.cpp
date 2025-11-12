#include <iostream>
#include <cstdint>

int main(){
    std::cout << sizeof(std::int_fast8_t) * 8 << '\n';
    std::cout << sizeof(std::int_fast16_t) * 8 << '\n';
    std::cout << sizeof(std::int_fast32_t) * 8 << '\n';
    std::cout << sizeof(std::int_fast64_t) * 8 << '\n';
    
    std::cout << sizeof(std::int_least8_t) * 8 << '\n';
    std::cout << sizeof(std::int_fast16_t) * 8 << '\n';
    std::cout << sizeof(std::int_fast32_t) * 8 << '\n';
    std::cout << sizeof(std::int_fast64_t) * 8 << '\n';
}