#include <iostream>
using namespace std;

int main(){
    int L, C;
    cin >> L >> C;
    int **v = new int*[L];

    for(int i = 0; i < L; i++){
        v[i] = new int[C];
    }

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cin >>  v[i][j];
        }
    }

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    delete v;

    return 0;
}