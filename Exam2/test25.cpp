#include <iostream>
using namespace std;


int main(){
   
    int a = 0;
    int b = 1;
    int c = 2;
    
    if(a == 1 )
        if(b == 1 ) c++;
        else
        c--;
    

    cout <<"c = " << c << '\n';
    
    return 0;
};