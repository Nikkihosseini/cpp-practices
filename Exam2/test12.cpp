#include <iostream>

int main(){

    float arry[] = {22.2 ,33.3 , 44.4 , 55.5 , 66.6 , 77.7};

    int size = sizeof(arry)/sizeof(float);

    for(int i = 0 ; i < size ; i++){
        std::cout<< "array[" << i << "]" << '\t';
    };


    return 0;
};