#include <iostream>


int main(){
    using std::cout;
    using std::cin;

    cout << "Enter 1 or 2 : ";
    int num{};
    cin >> num;

    switch (num){
        case 1:
            cout << "One" << '\n';
        break;
    
        case 2:
            cout << "two" << '\n';
        break;
        default:
            cout << "Enter Correct number!" << '\n';
        break;
    }

    cout << "After Swicth";

    return 0;
}