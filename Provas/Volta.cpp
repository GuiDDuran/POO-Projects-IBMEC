#include <iostream>

using namespace std;

int main() {
    int x, y, volta = 1, diferenca;
    cin >> x >> y;
    diferenca = y - x;

    // Enquanto a diferença for menor ou igual ao tempo do piloto mais lento
    while (diferenca <= y) {
        volta++;
        diferenca += y - x; // Adiciona a diferença ao tempo do piloto mais lento
    }

    cout << volta << endl;
    return 0;
}