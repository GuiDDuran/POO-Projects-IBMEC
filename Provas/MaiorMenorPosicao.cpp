#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int numeros[n], maior, menor, menor_posicao, maior_posicao;
    for (int i = 0; i < n; i++){
        cin >> numeros[i];
        if (numeros[i] > maior){
            maior = numeros[i];
            maior_posicao = i;
        }
        if(numeros[i] < menor){
            menor = numeros[i];
            menor_posicao = i;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Posicao menor valor: " << menor_posicao << endl;
    cout << "Posicao maior valor: " << maior_posicao << endl;
}