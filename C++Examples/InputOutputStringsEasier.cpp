#include <iostream>
using namespace std;
int main() {
    char c[50];
    unsigned int i = 0;
    cin.get(c, 50);

    while(c[i] != '\0'){
        i += 1;
    }

    cout << c << endl;
    cout << "O tamanho da palavra é: " << i << endl;
    return 0;
}
