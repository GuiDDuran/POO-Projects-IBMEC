#include <iostream>

using namespace std;

int main(){
    int s, t, f;
    cin >> s >> t >> f;
    int soma = s + t;
    if (soma >= 24){
        soma -= 24;
    }
    int destino = soma + f;
    if (destino < 0){
        destino += 24;
    }
    cout << destino << endl;
    return 0;
}