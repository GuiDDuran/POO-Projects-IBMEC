#include <iostream>
#include <string>

using namespace std;

// Classe Animalia (Reino Animalia)
class Animalia {
public:
    // Método obterDescricao()
    string obterDescricao() {
        return "Reino Animalia";
    }
};

// Classe Chordata (Filo Chordata)
class Chordata : public Animalia {
public:
    string obterDescricao() {
        return Animalia::obterDescricao() + "\n" +
               "Filo Chordata";
    }
};

// Classe Mammalia (Classe Mammalia)
class Mammalia : public Chordata {
public:
    string obterDescricao() {
        return Chordata::obterDescricao() + "\n" +
               "Classe Mammalia";
    }
};

// Classe Homem
class Homem : public Mammalia {
public:
    string obterDescricao() {
        return Mammalia::obterDescricao() + "\n" +
               "Ordem Primata\n" +
               "Familia Hominidae\n" +
               "Gênero Homo\n" +
               "Espécie Homo sapiens";
    }
};

// Classe Cao
class Cao : public Mammalia {
public:
    string obterDescricao() {
        return Mammalia::obterDescricao() + "\n" +
               "Ordem Carnivora\n" +
               "Familia Canidae\n" +
               "Gênero Canis\n" +
               "Espécie Canis lupus familiaris";
    }
};

// Classe Arthropoda (Filo Arthropoda)
class Arthropoda : public Animalia {
public:
    string obterDescricao() {
        return Animalia::obterDescricao() + "\n" +
               "Filo Arthropoda";
    }
};

// Classe Insecta (Classe Insecta)
class Insecta : public Arthropoda {
public:
    string obterDescricao() {
        return Arthropoda::obterDescricao() + "\n" +
               "Classe Insecta";
    }
};

// Classe Mosca
class Mosca : public Insecta {
public:
    string obterDescricao() {
        return Insecta::obterDescricao() + "\n" +
               "Ordem Diptera\n" +
               "Familia Muscidae\n" +
               "Gênero Musca\n" +
               "Espécie Musca domestica";
    }
};

// Função principal
int main() {
    Homem homem;
    Cao cao;
    Mosca mosca;

    cout << "Descrição do Homem:\n" << homem.obterDescricao() << "\n\n";
    cout << "Descrição do Cão:\n" << cao.obterDescricao() << "\n\n";
    cout << "Descrição da Mosca:\n" << mosca.obterDescricao() << "\n\n";

    return 0;
}