#include <iostream>

using namespace std;

int main(){
    int num_pessoas;
    cin >> num_pessoas;
    int pessoas[num_pessoas];
    int posicao = 0;
    for(int i = 0; i < num_pessoas; i++){
        cin >> pessoas[i];
        if(pessoas[i] < pessoas[posicao]){
            posicao = i;
        }
    }
    cout << posicao + 1 << endl;
    return 0;
}