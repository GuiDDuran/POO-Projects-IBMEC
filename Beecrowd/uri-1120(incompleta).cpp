#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        char digito;
        string valor;
        cin >> digito >> valor;
        int count = 0;

        if (digito == '0' && valor == "0") {
            break;
        }

        for (int i = 0; i < valor.size(); i++) {
            if(valor[i] == '0'){
                if (count != 0) {
                    cout << valor[i];
                }
            }
            else if(valor[i] != digito){
                cout << valor[i];
                count = 1;
            }
        }

        if(count == 0){
            cout << 0 << endl;
        }
        else{
            cout << endl;
        }
    }
    return 0;
}