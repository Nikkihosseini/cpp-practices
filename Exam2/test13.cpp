#include <iostream>


void read(int[] , int&, const int);

void print(int[] , int, const int);

int main(){ 
    const int maxSize = 100;

    int a[maxSize]={0}, size;

    read(a,size,maxSize);

    std::cout << "The array has " << size << " elements: ";
    print(a,size,maxSize);

};


void read(int a[], int& n ,const int maxSize){ 
    std::cout << "Enter integers. Terminate with 0:\n";
    n = 0;

    do{ 
        std::cout << "a[" << n << "]: ";
        std::cin >> a[n];
    } while (a[n++] !=0 && n < maxSize);
    --n; 
};

void print(int a[], int n ,const int maxSize){  

    for (int i=0; i<n; i++){
        std::cout << a[i] << " ";
    };
};