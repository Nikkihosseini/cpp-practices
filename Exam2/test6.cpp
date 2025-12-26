#include <iostream>
#include <cmath>

// Prime numbers

bool isPrime(int n);


int main(){
  

    for(int i = 0 ; i < 100 ; i++){
        if(isPrime(i)){
            std::cout << i << '\t';
        };
    };


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