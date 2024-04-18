#include <iostream>

using namespace std;

int main(){
    while(true){
        int t, n;
        cin >> t >> n;
        if (t == 0){
            break;
        }

        int total = 0;
        for (int i = 0; i < t; i++){
            string nome;
            int pontos;
            cin >> nome >> pontos;
            total += pontos;
        }
        int maximo = 3 * n;
        int empates = maximo - total;
        cout << empates << endl;
    }
    return 0;
}