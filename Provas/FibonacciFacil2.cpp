#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){

    /*int n, num1 = 0, num2 = 1, prox = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << num1;
        }else if(i == 1){
            cout << " " << num2;
        }else{
            prox = num1 + num2;
            num1 = num2;
           num2 = prox;
            cout << " " << prox;
        }
    }
    cout << endl;*/

    for(int j = 0; j < n; j++){
        cout << fibonacci(j) << " ";
    }

    return 0;
}