#include <iostream>



int main(){

    using std::cout;
    using std::cin;

    int num{};

    do{
        cout << "Enter a negative number:" << '\n';
        cin >> num;
        cout << "Result: " << num << '\n';
    } while (num >= 0);
    

    return 0;
}