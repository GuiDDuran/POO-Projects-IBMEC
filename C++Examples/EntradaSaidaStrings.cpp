#include <iostream>
using namespace std;
int main(){
    char c[100];  // Armazenamento de uma cadeia de caracteres.
    unsigned int i = 0;  // Variável auxiliar.
    while(i < 5){
        c[i] = cin.get();  // Insere a cariável no vetor.
        cout << c[i] << endl;
        i += 1;
    }
    cout << c << endl;  // Imprime o vetor final.
    return 0;
}