#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Porta {
public:
    bool aberta;
    string cor;
    double dimensaoX;
    double dimensaoY;
    double dimensaoZ;

    Porta(bool aberta, string cor, double dimensaoX, double dimensaoY, double dimensaoZ) {
        this -> aberta = aberta;
        this -> cor = cor;
        this -> dimensaoX = dimensaoX;
        this -> dimensaoY = dimensaoY;
        this -> dimensaoZ = dimensaoZ;
    }

    void abrir() {
        aberta = true;
    }

    void fechar() {
        aberta = false;
    }

    void pintar(string novaCor) {
        cor = novaCor;
    }

    bool estaAberta() {
        return aberta;
    }
};

int main() {
    Porta porta(true, "Vermelho", 1.0, 2.0, 0.5);
    porta.abrir();
    porta.fechar();
    porta.pintar("Azul");
    if (porta.estaAberta()) {
        cout << "A porta está aberta." << endl;
    } else {
        cout << "A porta está fechada." << endl;
    }

    return 0;
}

class Casa {
public:
    string cor;
    Porta porta1;
    Porta porta2;
    Porta porta3;

    Casa(string cor, Porta porta1, Porta porta2, Porta porta3) {
        this->cor = cor;
        this->porta1 = porta1;
        this->porta2 = porta2;
        this->porta3 = porta3;
    }

    void pintar(string novaCor) {
        cor = novaCor;
    }

    int totalDePortas() {
        return 3;
    }

    int quantidadeDePortasAbertas() {
        int count = 0;
        if (porta1.estaAberta()) {
            count++;
        }
        if (porta2.estaAberta()) {
            count++;
        }
        if (porta3.estaAberta()) {
            count++;
        }
        return count;
    }
};

int main() {
    Porta porta1(true, "Vermelho", 1.0, 2.0, 0.5);
    Porta porta2(false, "Verde", 0.8, 1.5, 0.3);
    Porta porta3(true, "Azul", 0.9, 1.8, 0.4);

    Casa casa("Branco", porta1, porta2, porta3);

    casa.pintar("Amarelo");

    porta1.abrir();
    porta2.fechar();
    porta3.abrir();

    cout << "Número de portas abertas: " << casa.quantidadeDePortasAbertas() << endl;

    return 0;
}

class Edificio {
public:
    string cor;
    int totalDePortas;
    int totalDeAndares;
    vector<Porta> portas;

    Edificio(string cor, int totalDePortas, int totalDeAndares) {
        this->cor = cor;
        this->totalDePortas = totalDePortas;
        this->totalDeAndares = totalDeAndares;
    }

    void pintar(string novaCor) {
        cor = novaCor;
    }

    int totalDePortas() {
        return portas.size();
    }

    int quantasPortasEstaoAbertas() {
        int count = 0;
        for (int i = 0; i < portas.size(); ++i) {
            if (portas[i].estaAberta()) {
                count++;
            }
        }
        return count;
    }

    void adicionarAndar() {
        totalDeAndares++;
    }

    void adicionaPorta(Porta p) {
        portas.push_back(p);
    }

    int totalDeAndares() {
        return totalDeAndares;
    }
};

int main() {
    Edificio edificio("Branco", 6, 0);

    edificio.pintar("Amarelo");

    Porta porta1(true, "Vermelho", 1.0, 2.0, 0.5);
    Porta porta2(false, "Verde", 0.8, 1.5, 0.3);
    Porta porta3(true, "Azul", 0.9, 1.8, 0.4);
    Porta porta4(false, "Amarelo", 1.2, 2.2, 0.6);
    Porta porta5(true, "Roxo", 0.7, 1.4, 0.2);
    Porta porta6(false, "Laranja", 1.1, 2.1, 0.7);

    edificio.adicionaPorta(porta1);
    edificio.adicionaPorta(porta2);
    edificio.adicionaPorta(porta3);
    edificio.adicionaPorta(porta4);
    edificio.adicionaPorta(porta5);
    edificio.adicionaPorta(porta6);

    porta1.abrir();
    porta2.fechar();
    porta3.abrir();
    porta4.abrir();
    porta5.fechar();
    porta6.abrir();

    cout << "Número de portas abertas: " << edificio.quantasPortasEstaoAbertas() << endl;
    cout << "Total de portas no edifício: " << edificio.totalDePortas() << endl;

    edificio.adicionarAndar();
    edificio.adicionarAndar();
    edificio.adicionarAndar();

    cout << "Total de andares no edifício: " << edificio.totalDeAndares() << endl;

    return 0;
}

class Imovel {
public:
    string cor;

    Imovel(string cor) {
        this->cor = cor;
    }

    void pintar(string novaCor) {
        cor = novaCor;
    }

    virtual int totalDePortas() = 0;
    virtual int quantasPortasEstaoAbertas() = 0;
};

class Casa : public Imovel {
public:
    Porta porta1;
    Porta porta2;
    Porta porta3;

    Casa(string cor, Porta porta1, Porta porta2, Porta porta3) : Imovel(cor) {
        this->porta1 = porta1;
        this->porta2 = porta2;
        this->porta3 = porta3;
    }

    int totalDePortas() override {
        return 3;
    }

    int quantasPortasEstaoAbertas() override {
        int count = 0;
        if (porta1.estaAberta()) {
            count++;
        }
        if (porta2.estaAberta()) {
            count++;
        }
        if (porta3.estaAberta()) {
            count++;
        }
        return count;
    }
};

class Edificio : public Imovel {
public:
    int totalDePortas;
    int totalDeAndares;
    vector<Porta> portas;

    Edificio(string cor, int totalDePortas, int totalDeAndares) : Imovel(cor) {
        this->totalDePortas = totalDePortas;
        this->totalDeAndares = totalDeAndares;
    }

    int totalDePortas() override {
        return portas.size();
    }

    int quantasPortasEstaoAbertas() override {
        int count = 0;
        for (const Porta& porta : portas) {
            if (porta.estaAberta()) {
                count++;
            }
        }
        return count;
    }

    void adicionarAndar() {
        totalDeAndares++;
    }

    void adicionaPorta(Porta p) {
        portas.push_back(p);
    }

    int totalDeAndares() {
        return totalDeAndares;
    }
};