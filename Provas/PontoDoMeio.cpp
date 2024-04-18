#include <iostream>

using namespace std;

int main(){
    long long int n, pontos = 2, fator = 1, resposta;
    cin >> n;
    for(int i = 0; i <= n; i++){
        resposta = pontos * pontos;
        pontos = pontos + fator;
        fator *= 2;
    }
    cout << resposta << endl;
    return 0;
}