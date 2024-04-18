#include <iostream>

using namespace std;

int fibonacci(int cases){
    if(cases == 0){
        return 0;
    } else if(cases == 1){
        return 1;
    }else if(cases > 1){
        return fibonacci(cases - 1) + fibonacci(cases - 2);
    } 
}

int main(){
    int cases;
    cin >> cases;
    cout << fibonacci(cases);
    return 0;
}