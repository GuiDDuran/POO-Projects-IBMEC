#include <iostream>
#include <vector>

using namespace std;

class Jogador{
public:
    string posicao;
    int numero;
    string nome;

    Jogador(string posicao, int numero, string nome){
        this -> posicao = posicao;
        this -> numero = numero;
        this -> nome = nome;
    }

    string getPosicao() const {
        return posicao;
    }

    int getNumero() const {
        return numero;
    }

    string getNome() const {
        return nome;
    } 
};

class Time{
public:
    vector<Jogador> jogadores;

    void adicionarJogador(Jogador jogador){
        jogadores.push_back(jogador);
    }

    void substituirJogador(int i, Jogador novoJogador){
        jogadores[i] = novoJogador;
    }

    Jogador consultarJogador(int i){
        return jogadores[i];
    }
};

int main(){
    Time meuTime;

    Jogador jogador1("Atacante", 7, "Hulk");
    Jogador jogador2("Goleiro", 22, "Everson");

    meuTime.adicionarJogador(jogador1);
    meuTime.adicionarJogador(jogador2);

    cout << "Jogador 1: " << meuTime.consultarJogador(0).getNome() << ", Numero: " << meuTime.consultarJogador(0).getNumero() << ", Posicao: " << meuTime.consultarJogador(0).getPosicao() << endl;

    cout << "Jogador 2: " << meuTime.consultarJogador(1).getNome() << ", Numero: " << meuTime.consultarJogador(1).getNumero() << ", Posicao: " << meuTime.consultarJogador(1).getPosicao() << endl;

    Jogador novoJogador("Atacante", 10, "Paulinho");
    meuTime.substituirJogador(1, novoJogador);

    cout << "Jogador 2: " << meuTime.consultarJogador(1).getNome() << ", Numero: " << meuTime.consultarJogador(1).getNumero() << ", Posicao: " << meuTime.consultarJogador(1).getPosicao() << endl;

    return 0;
}