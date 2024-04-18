#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int numeros[n];
    int posicao = 0;
    for(int i = 0; i < n; i++){
        cin >> numeros[i];
        if(numeros[i] < numeros[posicao]){
            posicao = i;
        }
    }
    cout << "Menor valor: " << numeros[posicao] << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}