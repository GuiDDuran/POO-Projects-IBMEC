#include <iostream>

using namespace std;

int main(){
    while(true){
        int qntd;
        cin >> qntd;
        if (qntd == 0){
            break;
        }

        int velocidade[qntd];
        int maior = 0;
        for(int i = 0; i < qntd; i++){
            cin >> velocidade[i];
            if (velocidade[i] > maior){
                maior = velocidade[i];
            }
        }

        if (maior < 10){
            cout << 1 << endl;
        }else if (maior >= 10 && maior < 20){
            cout << 2 << endl;
        }else if (maior >= 20){
            cout << 3 << endl;
        }
    }
    return 0;
}