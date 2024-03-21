#include <iostream>
#include <string>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    cin.ignore();

    for (int i = 0; i < cases; i++){
        string frase;
        getline(cin, frase);

        string first_half = "";
        string second_half = "";

        int half = frase.size() / 2;

        for (int j = half - 1; j >= 0; j--){
            first_half += frase[j];
        }

        for (int k = frase.size() -1 ; k >= half; k--){
            second_half += frase[k];
        }
            cout << first_half << second_half << endl;
    }
    return 0;
}