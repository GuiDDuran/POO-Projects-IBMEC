#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    string numero;
    cin >> numero;
    cout << numero.size() << endl;
    for(int i = 0; i < numero.size(); i++){
        numero[i] = tolower(numero[i]);
    }
    cout << numero << endl;
    string tres_primeiros = numero.substr(0, 3);
    cout << tres_primeiros << endl;
    if(tres_primeiros == "aBC"){
        cout << "Ok" << endl;
    }
    if(numero[0] == 'a' && numero[1] == 'B' && numero[2] == 'C'){
        cout << "Ok" << endl;
    }
    int a = 2;
    int teste = pow(a, 2);
    cout << teste << endl;
}