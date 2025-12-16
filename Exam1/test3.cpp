#include <iostream>
using namespace std;

int main(){

    cout << "Enter a number: " << '\n';

    int number;

    cin >> number;

    int x;

    for(int i = number; i / 10 == 0; i/10){

        x=(i%10)*10;
    }

    cout << x << '\n';

    return 0;
}