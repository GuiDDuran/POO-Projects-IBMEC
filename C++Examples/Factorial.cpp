#include <iostream>

using namespace std;

int factorial(int x){
    if (x == 0){  // Caso base.
        return 1;
    }
    else{    
        return x * factorial(x-1);
    }
}

int main(){
    int x;
    cin >> x;
    cout << factorial(x) << endl;
    return 0;
}