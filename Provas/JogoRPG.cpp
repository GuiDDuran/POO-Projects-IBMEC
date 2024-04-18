#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string alfabeto;
        string palavra;
        cin >> alfabeto;
        int tam;
        cin >> tam;
        for(int j = 0; j < tam; j++){
            int letra; 
            cin >> letra;
            palavra = alfabeto[letra - 1];
            cout << palavra;
        }
        cout << endl;
    }
    return 0;
}