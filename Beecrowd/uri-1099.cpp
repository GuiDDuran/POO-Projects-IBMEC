#include <iostream>

using namespace std;

int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int num1, num2, maior, menor, soma = 0;
        cin >> num1 >> num2;
        if(num1 > num2){
            maior = num1;
            menor = num2;
        }
        else if(num2 > num1){
            maior = num2;
            menor = num1;
        }
        else{
            cout << 0 << endl;
            continue;
        }
        for(int j = menor + 1; j < maior; j++){
            if(j % 2 != 0){
                soma += j;
            }
        }
        cout << soma << endl;
    }

    return 0;
}