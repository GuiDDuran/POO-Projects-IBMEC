#include <iostream>

using namespace std;

class Bicicleta{
public:
    int velocidade;
    int marcha;

    Bicicleta(int velocidade = 0, int marcha = 0){
        this -> velocidade = velocidade;
        this -> marcha = marcha;
    }

    void acelerar(int valor){
        velocidade += valor;
    }

    void frear(int valor){
        if (velocidade >= valor){
            velocidade -= valor;
        }
        else{
            velocidade = 0;
        }
    }

    void imprimirEstados(){
        cout << "Velocidade: " << velocidade << endl;
        cout << "Marcha: " << marcha << endl;
    }
};

int main(){
    Bicicleta minha_bicicleta;
    minha_bicicleta.imprimirEstados();

    minha_bicicleta.acelerar(10);
    minha_bicicleta.imprimirEstados();

    minha_bicicleta.frear(5);
    minha_bicicleta.imprimirEstados();
    
    return 0;
}