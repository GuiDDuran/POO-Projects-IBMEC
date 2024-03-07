#include <iostream>

using namespace std;

int main(){
    char cpf[15];
    char p1[4], p2[4], p3[4], p4[3];
    unsigned int i;
    cin >> cpf;

    for (i = 0; i < 3; i++) {
        p1[i] = cpf[i];
    }
    p1[3] = '\0';
  
    for (i = 4; i < 7; i++) {
        p2[i - 4] = cpf[i];
    }
    p2[3] = '\0';

    for (i = 8; i < 11; i++) {
        p3[i - 8] = cpf[i];
    }
    p3[3] = '\0';

    for (i = 12; i < 14; i++) {
        p4[i - 12] = cpf[i];
    }
    p4[2] = '\0';

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;
    return 0;
}