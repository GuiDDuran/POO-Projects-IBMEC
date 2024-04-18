#include <iostream>

using namespace std;

int main(){
    int valores[3], meio = 0;

    for(int i = 0; i < 3; i++){
        cin >> valores[i];
    }

    int maior = valores[0];
    for(int i = 1; i < 3; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
        }
    }

    int menor = valores[0];
    for(int i = 1; i < 3; i++) {
        if(valores[i] < menor) {
            menor = valores[i];
        }
    }

    for(int i = 0; i < 3; i++) {
        if(valores[i] != maior && valores[i] != menor) {
            meio = valores[i];
            break;
        }
    }

    cout << maior << " " << meio << " " << menor << endl;

    for(int i = 0; i < 3; i++){
        cout << valores[i] << " ";
    }


    
    return 0;
}