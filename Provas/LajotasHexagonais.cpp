#include <iostream>

using namespace std;

int main(){

    while(true){
        int n;
        cin >> n;
        if (n == 0){
            break;
        }

        int lajota1 = 1;
        int lajota2 = 2;
        int prox;
        if (n == 1){
            cout << lajota1 << endl;
        } else if (n == 2){
            cout << lajota2 << endl;
        } else{
            for(int i = 3; i <= n; i++){
                prox = lajota1 + lajota2;
                lajota1 = lajota2;
                lajota2 = prox;
            }
            cout << prox << endl;
        }
    }

    return 0;
}