#include <iostream>

using namespace std;

int main(){
    while(true){
        int num_lajotas;
        cin >> num_lajotas;
        if(num_lajotas == 0){
            break;
        }
        int lajota1 = 1, lajota2 = 2, prox;
        if(num_lajotas == 1){
            cout << lajota1 << endl;
        }
        else if(num_lajotas == 2){
            cout << lajota2 << endl;
        }
        else{
            for(int i = 3; i <= num_lajotas; i++){
                prox = lajota1 + lajota2;
                lajota1 = lajota2;
                lajota2 = prox;
            }
            cout << prox << endl;
        }
    }
    return 0;
}