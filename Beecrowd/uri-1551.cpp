#include <iostream>

using namespace std;

int main(){
    int rep;
    cin >> rep;
    cin.ignore();

    for(int i = 0; i < rep; i++){
        string frase;
        getline(cin, frase);

        int alfabeto[26] = {0};
        int count = 0;

        for(char letra : frase){
            if(letra >= 'a' && letra <= 'z'){
                int posicao = letra - 'a';
                if(alfabeto[posicao] == 0){
                    alfabeto[posicao] = 1;
                    count++;
                }
            }
        }

        if(count == 26){
            cout << "frase completa" << endl;
        }
        else if(count >= 13 && count < 26){
            cout << "frase quase completa" << endl;
        }
        else if(count < 13){
            cout << "frase mal elaborada" << endl;
        }
    }
    return 0;
}