#include <iostream>

using namespace std;

bool fibonacci(int valor){
    int num1 = 0, num2 = 1, prox = 1;
    while(prox < valor){
        prox = num1 + num2;
        num1 = num2;
        num2 = prox;
    }
    return prox == valor;
}

bool temTres(int valor){
     while (valor > 0) {
        if (valor % 10 == 3) {
            return true;
        }
        valor /= 10;
    }
    return false;
}


int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int valor;
        cin >> valor;

        int count = 0;
        for(int j = 1; count < valor; j++) {
            if (fibonacci(j) && (j % 3 == 0 || temTres(j))){
                count++;
                if(count == valor){
                    cout << j << endl;
                }
            }
        }
    }
}