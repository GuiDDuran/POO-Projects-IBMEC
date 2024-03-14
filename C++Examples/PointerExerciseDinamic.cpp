#include <iostream>
#define MAX 10000000
using namespace std;

int main(){

    long long int *vetorDinamico = nullptr;
    vetorDinamico = new long long int[MAX];

    for(long long int i = 0; i < MAX; i++){
        vetorDinamico[i] = i * i;
    }

    for(int i = 0; i < MAX; i++){
        cout << vetorDinamico[i] << endl;
    }

    delete vetorDinamico;
    return 0;
}