#include <iostream>

void test(int num){
    using std::cout;
    using std::cin;

    switch (num){
        case 1:
            cout << "One" << '\n';
        return;
    
        case 2:
            cout << "two" << '\n';
        return;
        
        default:
            cout << "Enter Correct number!" << '\n';
        return;
    }

    cout << "After Swicth";
}

int main(){
    using std::cout;
    using std::cin;

    cout << "Enter 1 or 2 : ";
    int num{};
    cin >> num;

    test(num);

    return 0;
}