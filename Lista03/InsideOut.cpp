#include <iostream>
#include <string>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    string frase;
    cin >> frase;
    for (int i = 0; i < cases; i++){
        for (int j = 0; j < frase.size(); j++){
            cout << frase[j] << endl;
        }
    }
    return 0;
}