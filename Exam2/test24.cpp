#include <iostream>
using namespace std;


int main(){
   
    int n;
    int sum = 0;

    cout << "Enter a number: " << '\n';
    cin >> n;

    while(n < 0){
        cout << "Error! Please Enter a positive number next time: " << '\n';
        cin >> n;
    }
   
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }

    cout <<"sum = " << sum << '\n';
    
    return 0;
};