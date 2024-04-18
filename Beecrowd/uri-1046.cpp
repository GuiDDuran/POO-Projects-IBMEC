#include <iostream>

using namespace std;

int main(){
    int inicio, fim, total;
    cin >> inicio >> fim;
    total = fim - inicio;
    if(total <= 0){
        total += 24;
    }
    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

    return 0;
}