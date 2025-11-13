#include <iostream>
#include <bitset>


int main(){

    int x{12};

    std::cout << x << '\n'; // decimal => 10
    std::cout << std::hex << x << '\n'; // hex => 16
    std::cout << std::oct << x << '\n'; // octal => 8

    // binary
    std::cout << std::bitset<4>{0b011001} << '\n'; // binary to binary with 4 digits
    std::cout << std::bitset<8>{0xc} << '\n'; // hex to binary with 8 digits
    std::cout << std::bitset<8>{10} << '\n'; // dec to binary with 8 digits
    std::cout << std::bitset<8>{3} << '\n'; // dec to binary with 8 digits

    return 0;
}