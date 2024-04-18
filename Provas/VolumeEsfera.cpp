#include <iostream>
#include <cmath>

using namespace std;

double calculaVolume(double raio = 1){
    return (4.0/3.0) * 3.14 * pow(raio, 3);
}

int main(){
    cout << calculaVolume() << endl;
    return 0;
}