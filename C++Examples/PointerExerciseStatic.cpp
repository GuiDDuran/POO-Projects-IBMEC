#include <iostream>
#define MAX 10000000
using namespace std;

int main(){
    int vetorEstatico[MAX];

    for(int i = 0; i < MAX; i++){
        vetorEstatico[i] = i * i;
        cout << vetorEstatico[i] << endl;
    }

    
    return 0;
}