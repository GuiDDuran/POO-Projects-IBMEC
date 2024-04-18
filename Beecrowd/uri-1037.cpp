#include <iostream>

using namespace std;

int main(){
    double nmr;
    cin >> nmr;
    if(nmr >= 0 && nmr <= 25){
        cout << "Intervalo [0,25]" << endl;
    }
    else if(nmr > 25 && nmr <= 50){
        cout << "Intervalo (25,50]" << endl;
    }
    else if(nmr >50 && nmr <= 75){
        cout << "Intervalo (50,75]" << endl;
    }
    else if(nmr > 75 && nmr <= 100){
        cout << "Intervalo (75,100]" << endl;
    }
    else{
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}