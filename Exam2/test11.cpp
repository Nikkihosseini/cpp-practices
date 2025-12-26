#include <iostream>



int main(){ 

    const int SIZE = 5; // defines the size N for 5 elements

    double a[SIZE]; // declares the array's elements as type double

    std::cout << "Enter " << SIZE << " numbers:\t";

    for (int i = 0; i < SIZE; i++)

    std::cin >> a[i];

    std::cout << "In reverse order: ";

    for (int i=SIZE-1; i>=0; i--)

    std::cout << "\t" << a[i];

    return 0;
};