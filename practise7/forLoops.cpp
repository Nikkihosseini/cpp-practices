#include <iostream>



int main(){

    using std::cout;
    using std::cin;
    
    cout << "Enter number 0 or 1:" << '\n';
    int num{};
    cin >> num;

    for(int i{num} ; i <11 ; i++){
        cout << "Result: " << i << '\n';
    }
    

    return 0;
}