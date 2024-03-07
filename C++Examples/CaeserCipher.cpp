#include <iostream>

using namespace std;

int main(){
    int chaveP;
    char texto_legivel[1000];
    char texto_encriptado[1000];
    char texto_descriptado[1000];

    cin.get(texto_legivel, 1000);
    cin >> chaveP;

    for(int i = 0; texto_legivel[i] != '\0'; i++){
        texto_encriptado[i] = texto_legivel[i] + chaveP;
    }
    
    for(int i = 0; texto_legivel[i] != '\0'; i++){
        texto_descriptado[i] = texto_encriptado[i] - chaveP;
    }

    cout << "Testo Legivel: " << texto_legivel << endl;
    cout << "Testo Encriptado: " << texto_encriptado << endl;
    cout << "Testo Descriptado: " << texto_descriptado << endl;

    return 0;
}