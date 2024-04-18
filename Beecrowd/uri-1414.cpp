#include <iostream>

using namespace std;

int main(){
    while(true){
        int qnt_t, num_partidas;
        cin >> qnt_t >> num_partidas;

        if(qnt_t == 0){
            break;
        }

        int total = 0;
        for(int i = 0; i < qnt_t; i++){
            string nome;
            int pontos;
            cin >> nome >> pontos;
            total += pontos;
        }

        int max_pontos = 3 * num_partidas;
        int empates = max_pontos - total;
        
        cout << empates << endl;

    }
}