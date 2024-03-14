#include <iostream>

using namespace std;

int main(){
    int a = 90;
    int *ptr;  // Dlecara um ponteiro para um inteiro.
    ptr = &a;

    cout << "Valor de ptr: " << ptr << endl;
    cout << "Endereço da variável a: " << &a << endl;
    cout << "Conteúdo de ptr: " << *ptr << endl;

    *ptr = 10;
    cout << "Agora o conteúdo do ponteiro é : " << *ptr << endl;
    return 0;
}