#include <iostream>



int main(){
    using std::cout;
    using std::cin;

    cout << "Enter 0 or 1: ";
    int x{};
    cin >> x;
    
    if(x == 1){
        cout << "You Entered 1 !";
    }else if(x == 0){
        cout << "You Entered 0 !";
    }
    else{
        cout << "Enter Correct Number!";
    }

    return 0;
}