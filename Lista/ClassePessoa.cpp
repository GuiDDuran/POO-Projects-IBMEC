#include <iostream>
#include <vector>

using namespace std;

class Pessoa{
    public:
        string nome;
        string cpf;
        string dataNascimento;

    Pessoa(string nome, string cpf, string dataNascimento){
        this->nome = nome;
        this->cpf = cpf;
        this->dataNascimento = dataNascimento;
    }

    string getNome(){
        return this->nome;
    }

    string getCpf(){
        return this->cpf;
    }

    string getDataNascimento(){
        return this->dataNascimento;
    }

    void resumo(){
        cout << nome << endl;
        cout << cpf << endl;
        cout << dataNascimento << endl;
    }
};

class Aluno:public Pessoa{
    public:
        string curso;
        double cr;
    
    Aluno(string nome, string cpf, string dataNascimento, string curso, double cr):Pessoa(nome, cpf, dataNascimento){
        this->curso = curso;
        this->cr = cr;
    }

    string getCurso(){
        return this->curso;
    }

    double getCr(){
        return this->cr;
    }

    void resumo(){
        Pessoa::resumo();
        cout << curso << endl;
        cout << cr << endl;
    }
};

class Professor:public Pessoa{
    public:
        string formacao;
        vector<string> disciplinas;
    Professor(string nome, string cpf, string dataNascimento, string formacao, vector<string> disciplinas):Pessoa(nome, cpf, dataNascimento){
        this->formacao = formacao;
        this->disciplinas = disciplinas;
    }

    string getFormacao(){
        return this->formacao;
    }

    vector <string> getDisciplinas(){
        return this->disciplinas;
    }

    void resumo(){
        Pessoa::resumo();
        cout << formacao << endl;
        for (int i = 0; i < disciplinas.size(); ++i) {
            cout <<disciplinas[i];
            if (i != disciplinas.size() - 1) {
                cout << ", ";
            }
        }
    }
};

int main(){
    Pessoa pessoa1("Guilherme", "123", "20/12/2004");
    pessoa1.resumo();
    cout << endl;
    
    Pessoa pessoa2("Julia", "987", "16/05/2007");
    pessoa2.resumo();
    cout << endl;

    Aluno aluno1("Roberto", "567", "10/01/1997", "Administração", 8.7);
    aluno1.resumo();
    cout << endl;

    vector<string> disciplinas1 = {"POO", "Projeto de software", "Grafos"};
    Professor professor1("Rodrigo", "678", "15/01/1990", "Ciencia da computacao", disciplinas1);
    professor1.resumo();
    cout << endl;

    vector<string> disciplinas2 = {"Java", "Python", "Go", "React"};
    Professor professor2("Barbara", "678", "22/03/2001", "Direito", disciplinas2);
    professor2.resumo();
}