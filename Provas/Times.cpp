#include <iostream>

using namespace std;

int main(){
    int vit_c, emp_c, gol_c, vit_f, emp_f, gol_f, pontos_c = 0, pontos_f = 0;
    cin >> vit_c >> emp_c >> gol_c >> vit_f >> emp_f >> gol_f;
    pontos_c = (3 * vit_c) + (1 * emp_c);
    pontos_f = (3 * vit_f) + (1 * emp_f);
    if(pontos_c > pontos_f){
        cout << "Cormengo" << endl;
    } else if(pontos_f > pontos_c){
        cout << "Flaminthians" << endl;
    }else{
        if(gol_c > gol_f){
            cout << "Cormengo" << endl;
        }else if(gol_f > gol_c){
            cout << "Flaminthians" << endl;
        }else{
            cout << "Empate" << endl;
        }
    }
    return 0;
}