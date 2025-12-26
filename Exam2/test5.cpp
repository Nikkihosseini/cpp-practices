#include <iostream>
#include <cmath>

// Prime numbers

bool isPrime(int n);


int main(){
    int n;

    std::cout << "Enter a number: " << '\n';
    std::cin >> n;

    if(isPrime(n)){
        std::cout << n << " is a prime number!" << '\n';
    } else {
        std::cout << n << " is not a prime number!" << '\n';
    }


    return 0;

}

bool isPrime(int n){
    int sqrtnum = sqrt(n);

    if(n < 2) return false;
    if(n < 4) return true;
    if(n % 2 == 0) return false;
    for(int i = 3 ; i <= sqrtnum ; i += 2){
        if(n % i == 0) return false;
    };

    return true;

};