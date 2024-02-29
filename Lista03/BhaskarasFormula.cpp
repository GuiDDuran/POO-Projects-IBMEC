#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c, r1, r2;
    cin >> a >> b >> c;
    float delta = pow(b, 2) - 4 * a * c, divider = 2 * a;
    if (delta <= 0 || divider == 0){
        cout << "Impossivel calcular";
    }else{
        r1 = (-b + sqrt(delta)) / (divider);
        r2 = (-b - sqrt(delta)) / (divider);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl << "R2 = " << r2;
    }
    return 0;
}