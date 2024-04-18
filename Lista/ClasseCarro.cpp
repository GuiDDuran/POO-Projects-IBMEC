#include <iostream>

using namespace std;

class Carro{
private:
    // Esses são os atributos do objeto carro.
    string cor;
    string placa;
    int ano;
    int km;
public:
    // Esse é o construtor, que recebe os atributos do objeto.
    Carro(string cor = "Padrao", string placa = "0000000", int ano = 0, int km = 0){
        this -> cor = cor;
        this -> placa = placa;
        this -> ano = ano;
        this -> km = km;
    }
    // Esses são os métodos, get() para pegar os valores da variável e set() para passar os valores para a variável.
    void setCor(string cor){
        this -> cor = cor;
    }

    void setPlaca(string placa){
        this -> placa = placa;
    }

    void setAno(int ano){
        this -> ano = ano;
    }

    void setKm(int km){
        this -> km = km;
    }

    string getCor(){
        return this -> cor;
    }

    string getPlaca(){
        return this -> placa;
    }

    int getAno(){
        return this -> ano;
    }

    int getKm(){
        return this -> km;
    }

};

int main(){
    //Instânciando um objeto pelo construtor.
    Carro celta("Vermelho", "RWE1023", 1998, 10000);

    cout << "Cor: " << celta.getCor() << endl;
    cout << "Placa: " << celta.getPlaca() << endl;
    cout << "Ano: " << celta.getAno() << endl;
    cout << "Km: " << celta.getKm() << endl;

    //Instânciando um objeto pelos métodos.
    Carro palio;
    palio.setCor("Preto");
    palio.setPlaca("KWF1642");
    palio.setAno(2004);
    palio.setKm(2000);

    cout << "Cor: " << palio.getCor() << endl;
    cout << "Placa: " << palio.getPlaca() << endl;
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Km: " << palio.getKm() << endl;

    return 0;
}