#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float o, b, i;
    cin >> o >> b >> i;
    if (o < b && o < i){
        cout << "Otavio" << endl;
    }
    else if (b < o && b < i){
        cout << "Bruno" << endl;
    }
    else if (i < o && i < b){
        cout << "Ian" << endl;
    }
    else{
        cout << "Empate" << endl;
    }
    cout << fixed << setprecision(3);
    return 0;
}