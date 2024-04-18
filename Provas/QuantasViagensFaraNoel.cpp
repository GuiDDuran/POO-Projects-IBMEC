#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, m, soma = 0, peso, count = 0;
        cin >> n >> m;
        for (int j = 0; j < n; j++){
            cin >> peso;
            if (soma + peso > m) {
                count++;
                soma = peso;
            } else {
                soma += peso;
            }
        }
        count ++;
        cout << count << endl;
    }
}