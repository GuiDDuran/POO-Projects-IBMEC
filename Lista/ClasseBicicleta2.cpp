#include <iostream>

using namespace std;

class Bicicleta {
public:
    int velocidade;
    int marcha;
    int velocidadeMaxima;

    Bicicleta(int velocidadeMaxima, int velocidade = 0, int marcha = 0) {
        this->velocidade = velocidade;
        this->marcha = marcha;
        this->velocidadeMaxima = velocidadeMaxima;
    }

    void acelerar(int valor) {
        if (velocidade + valor <= velocidadeMaxima) {
            velocidade += valor;
        } else {
            velocidade = velocidadeMaxima;
        }
    }

    void frear(int valor) {
        if (velocidade >= valor) {
            velocidade -= valor;
        } else {
            velocidade = 0;
        }
    }

    void imprimirEstados() {
        cout << "Velocidade: " << velocidade << endl;
        cout << "Marcha: " << marcha << endl;
        cout << "Velocidade Máxima: " << velocidadeMaxima << endl;
    }
};

int main() {
    Bicicleta minha_bicicleta(30);
    minha_bicicleta.imprimirEstados();

    minha_bicicleta.acelerar(10);
    minha_bicicleta.imprimirEstados();

    minha_bicicleta.acelerar(25);
    minha_bicicleta.imprimirEstados();

    minha_bicicleta.frear(15);
    minha_bicicleta.imprimirEstados();
    
    return 0;
}