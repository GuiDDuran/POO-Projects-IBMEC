#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Sacola {
private:
    vector<string> itens;

public:
    Sacola(vector<string> itens){
        this->itens = itens;
    }
    // Método para adicionar um item à sacola
    void adicionarItem(string item) {
        itens.push_back(item);
    }

    // Método para remover um item da sacola
    void removerItem(string item) {
        for (int i = 0; i < itens.size(); ++i) {
            if (itens[i] == item) {
                itens.erase(itens.begin() + i);
                break; // Se encontrou o item, podemos parar de procurar
            }
        }
    }

    // Método para exibir todos os itens na sacola
    void exibirItens() {
        cout << "Itens na sacola:" << endl;
        for (string item : itens) {
            cout << item << endl;
        }
    }

    // Método para limpar a sacola (remover todos os itens)
    void limparSacola() {
        itens.clear();
        cout << "A sacola foi limpa." << endl;
    }
};

int main() {
    vector<string> produtos;
    int qntd_produtos;
    cin >> qntd_produtos;
    string produto;
    for(int i = 0; i < qntd_produtos; i++){
        cin >> produto;
        produtos.push_back(produto);
    }


    Sacola minhaSacola(produtos);

    //minhaSacola.adicionarItem("Maçã");
    //minhaSacola.adicionarItem("Banana");
    minhaSacola.adicionarItem("Laranja");
    minhaSacola.exibirItens();

    minhaSacola.removerItem("Laranja");
    minhaSacola.exibirItens();

    minhaSacola.limparSacola();
    minhaSacola.exibirItens();

    return 0;
}