#include <iostream>

using namespace std;

int main(){
    string digito;
    cin >> digito;
    bool sorte = false;
    for(int i = 0; i < digito.size(); i++){
        if(digito[i] == '1' && digito[i + 1] == '3'){
            sorte = true;
            break;
        }
    }
    if(sorte){
        cout << digito << " es de Mala Suerte" << endl;
    }else{
        cout << digito << " NO es de Mala Suerte" << endl;
    }
}