#include <iostream>
#include <string>

using namespace std;

int main(){

    while (true)
    {
        char digito;
        string valor;
        cin >> digito >> valor;

        if (digito == '0' && valor == "0"){
            break;
        }

        int count = 0;
        for(int i = 0; i < valor.size(); i++){
            
            if(valor[i] != digito){
                cout << valor[i];
            }
        }

        cout << endl;

    }

    return 0;
}