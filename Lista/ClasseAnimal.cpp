#include <iostream>
#include <vector>

using namespace std;

class Animal{
public:
    double peso;
    int idade;
    string nome;
    string raca;
    vector<string> vacina;

    Animal(double peso, int idade, string nome, string raca, vector<string> vacina){
        this->peso = peso;
        this->idade = idade;
        this->nome = nome;
        this->raca = raca;
        this->vacina = vacina;
    }

    void setPeso(string peso){
        this -> peso = peso;
    }

    void setIdade(string idade){
        this -> idade = idade;
    }

    void setNome(string nome){
        this -> nome = nome;
    }

    void setRaca(string raca){
        this -> raca = raca;
    }

    int getPeso(){
        return this -> peso;
    }

    int getIdade(){
        return this -> idade;
    }

    string getNome(){
        return this -> nome;
    }

    string getRaca(){
        return this -> raca;
    }

};

class Cachorro:public Animal{
public:
    string porte;
    Cachorro(double peso, int idade, string nome, string raca, vector<string> vacina, string porte):Animal(peso, idade, nome, raca, vacina){
        this->porte = porte;
    }

    void setPorte(string porte){
        this -> porte = porte;
    }

    string getPorte(){
        return this -> porte;
    }

};

class Gato:public Animal{
public:
    int qntd_bolas_de_pelo;
    Gato(double peso, int idade, string nome, string raca, vector<string> vacina, int qntd_bolas_de_pelo):Animal(peso, idade, nome, raca, vacina){
        this->qntd_bolas_de_pelo = qntd_bolas_de_pelo;
    }

    void miar(){
        cout << "Miau" << endl;
    }       
};

int main(){

    Animal animal(5.5, 7);
    vector<string> vacinas = {"Raiva", "V8"};
    Cachorro cachorro(7.2, 5, "Maggie", "Bulldog Francês", "Medio", vacinas);
    cout << cachorro.peso << endl;
    cout << cachorro.idade << endl;
    cout << cachorro.nome << endl;
    cout << cachorro.raca << endl;
    cout << cachorro.porte << endl;
    vector<string> vacinas_cachorro = cachorro.resumo();
    for (int i = 0; i < vacinas_cachorro.size(); ++i) {
        cout << "- " << vacinas_cachorro[i] << endl;
    }

    return 0;
}