#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, r;
        cin >> n >> r;

        int mergulharam[n];
        for (int j = 0; j < n; j++) {
            mergulharam[j] = 0;
        }

        int mergulho;
        for (int j = 0; j < r; j++) {
            cin >> mergulho;
            mergulharam[mergulho - 1] = 1;
        }

        for (int j = 0; j < n; j++){
            if (mergulharam[j] == 0){
                cout << j + 1 << " ";
            }
        }

        if (n == r){
            cout << "*" << endl;
        }
    }
    return 0;
}