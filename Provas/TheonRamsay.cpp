#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int t[n];
    int menorIndice = 0;
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] < t[menorIndice]){
            menorIndice = i;
        }
    }
    cout << menorIndice + 1 << endl;

    return 0;
}