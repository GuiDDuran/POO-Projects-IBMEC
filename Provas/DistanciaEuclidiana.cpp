#include <iostream>
#include <cmath>

using namespace std;

double disctanciaEuclidiana(double x1, double y1){
    double x2 = 0, y2 = 0;
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(){
    double x1, y1;
    cin >> x1 >> y1;
    cout << disctanciaEuclidiana(x1, y1) << endl;
    return 0;
}