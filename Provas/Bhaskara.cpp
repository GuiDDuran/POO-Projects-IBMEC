#include <iostream>
#include <cmath>

using namespace std;

double calcDelta(double a, double b, double c){
    return pow(b, 2) - 4 * a * c;
}

void calcRaizes(double a, double b, double delta){
    double x1 = (-b + sqrt(delta)) / 2 * a;
    double x2 = (-b - sqrt(delta)) / 2 * a;
    cout << x1 << " " << x2;
}

int main(){

    double a, b, c;
    cin >> a >> b >> c;
    double delta = calcDelta(a, b, c);
    calcRaizes(a, b, delta);
    return 0;
}