#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <thread>

using namespace std;

vector<string> nome;
vector<string> cpf;
vector<string> endereco;
vector<string> telefone;
vector<int> saldo;

void limparTela() {
    this_thread::sleep_for(chrono::seconds(3));
    system("cls");
}

int achar_id(vector<string> x, string nome){
    for (size_t i = 0; i < x.size(); i++){
        if(x[i]==nome){
            return i;
        }
    }
    return -1;
}

void Cadastro(){
    limparTela();

    cout << "Seja bem vindo ao CADASTRO DE CLIENTE\n" << endl;

    string Nome, Cpf, Endereco, Telefone;
    int Saldo;

    cout<<"Nome: ";
    cin>>Nome;
    nome.push_back(Nome);

    cout<< "Cpf: ";
    cin>>Cpf;
    cpf.push_back(Cpf);

    cout<< "Endereco: ";
    cin>>Endereco;
    endereco.push_back(Endereco);

    cout<< "Telefone: ";
    cin>>Telefone;
    telefone.push_back(Telefone);

    cout<< "Quanto de saldo deseja adicionar: ";
    cin>>Saldo;
    saldo.push_back(Saldo);

    cout << endl << "Cliente cadastrado com sucesso!" << endl;
}


void excluir(){
    limparTela();

    cout << "Seja bem vindo á EXCLUSÃO DE CLIENTE\n" << endl;
    cout << "Digite o nome do cliente que você deseja excluir: ";

    string cliente_a_excluir;
    cin >> cliente_a_excluir;
    int id = achar_id(nome, cliente_a_excluir);

    if (id != -1){
        nome.at(id) = "\0";
        cpf.at(id) = "\0";
        endereco.at(id) = "\0";
        telefone.at(id) = "\0";
        saldo.at(id) = 0;
        cout << endl << "Cliente excluído com sucesso!" << endl;
    }
    else{
        cout << endl << "Cliente não encontrado." << endl;
    }
}

void editar(){
    limparTela();
    cout << "Seja bem vindo á EDIÇÃO DE CLIENTE\n" << endl;
    cout << "Digite o nome do cliente que você deseja editar: ";

    string cliente_a_editar;
    cin >> cliente_a_editar;
    int id = achar_id(nome, cliente_a_editar);

    if (id != -1){
        char mudanca;
        bool loop = true;
        string NovoNome, NovoCPF, NovoEndereco, NovoTelefone;

        while (loop == true) {
            limparTela();
            cout << "1 - Nome\n" << "2 - CPF\n" << "3 - Endereço\n" << "4 - Telefone\n" << "5 - Voltar para o menu\n" << endl;
            cout << "Digite o número da opção que deseja alterar: " << endl;
            cin >> mudanca;
            switch(mudanca) {
                case '1':
                    limparTela();
                    cout << "Digite o novo nome: " << endl;
                    cin >> NovoNome;
                    nome.at(id) = NovoNome;
                    cout << endl << "Nome alterado com sucesso!" << endl;
                    break;
                case '2':
                    limparTela();
                    cout << "Digite o novo CPF: " << endl;
                    cin >> NovoCPF;
                    cpf.at(id) = NovoCPF;
                    cout << endl << "CPF alterado com sucesso!" << endl;
                    break;
                case '3':
                    limparTela();
                    cout << "Digite o novo endereço: " << endl;
                    cin >> NovoEndereco;
                    endereco.at(id) = NovoEndereco;
                    cout << endl << "Endereço alterado com sucesso!" << endl;
                    break;
                case '4':
                    limparTela();
                    cout << "Digite o novo telefone: " << endl;
                    cin >> NovoTelefone;
                    telefone.at(id) = NovoTelefone;
                    cout << endl << "Telefone alterado com sucesso!" << endl;
                    break;
                case '5':
                    loop = false;
                    break;
            }
        }
        cout << endl << "Resumo das alterações: " << endl;
        cout<<"Nome: "<<nome[id]<<endl<<"Cpf: "<<cpf[id]<<endl<<"Endereco: "<<endereco[id]<<endl<<"telefone: "<<telefone[id]<<endl<<"Saldo: "<<saldo[id]<<endl;
    }
    else{
        cout << endl << "Cliente não encontrado." << endl;
    }
}

void saque(int id){
    limparTela();
    cout << "Seja bem vindo ao SAQUE\n" << endl;
    cout << "Digite o valor que deseja sacar: ";
    int valor_saque;
    cin >> valor_saque;
    int saldo_final;
    saldo_final = saldo[id]-valor_saque;
    if (saldo_final < 0){
        cout << endl << "Saldo insuficiente, a quantia desejada é inferior á disponível para saque" << endl;
    }else{
        saldo[id]-= valor_saque;
        cout << endl << "Saque realizado com sucesso!" << endl;
    }
}

void deposito(int id){
    limparTela();
    cout << "Seja bem vindo ao DEPOSITO\n" << endl;
    cout << "Digite abaixo o valor que deseja depositar e ensira o dinheiro ou cheque na maquininha: ";
    int valor_deposito;
    cin >> valor_deposito;
    saldo[id] += valor_deposito;
    cout << endl << "Depósito realizado com sucesso!" << endl;
}

void mostraSaldo(int id){
    limparTela();
    cout << "Seja bem vindo á CONSULTA DE SALDO\n" << endl;
    cout << "O saldo disponível nesta conta é: " << saldo[id];
}

void operacoesBancarias(){
    limparTela();
    cout << "Seja bem vindo ás OPERAÇÕES BANCÁRIAS\n" << endl;
    cout << "Digite o nome do cliente que deseja realizar alguma operação: ";
    string cliente_no_caixa;
    cin >> cliente_no_caixa;
    int id = achar_id(nome, cliente_no_caixa);
    if (id != -1){
        bool flag = true;
        while (flag){ 
            limparTela();
            cout << "1 - Realizar saque\n" << "2 - Realizar depósito\n" << "3 - Mostrar saldo\n" << "4 - Voltar para o menu\n" << endl;
            cout << "Digite uma das opções acima: " << endl;
            char operacao;
            cin >> operacao;
            switch(operacao){
                case '1':
                    saque(id);
                    break;
                case '2':
                    deposito(id);
                    break;
                case '3':
                    mostraSaldo(id);
                    break;
                case '4':
                    flag = false;
                    break;
            }
        }
    }
    else{
        cout << endl << "Cliente não encontrado." << endl;
    }    
}


void menu(){
    limparTela();
    cout << "Seja bem vindo ao MENU do sistema bancário\n" << endl;
    cout << "1 - Adicionar cliente\n" << "2 - Excluir cliente\n" << "3 - Editar cliente\n" << "4 - Operações bancárias\n" << "5 - Encerrar programa\n" << endl;
    cout << "Digite uma das opções acima: ";
    char opcao;
    cin >> opcao;
    switch(opcao){
        case '1':
            Cadastro();
            break;
        case '2':
            excluir();
            break;
        case '3':
            editar();
            break;
        case '4':
            operacoesBancarias();
            break;
        case '5':
            cout << "Obrigado por utilizar nosso sistema, nos vemos em breve!";
            exit(0);
    }
}

int main() {
    while(true){
        menu();
    }
  return 0;
}