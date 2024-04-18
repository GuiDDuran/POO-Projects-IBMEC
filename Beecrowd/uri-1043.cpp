#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);
    if(a < b + c && b < a + c && c < a + b){
        double perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    }else{
        double area_trap = ((a + b) * c) / 2;
        cout << "Area = " << area_trap << endl;
    }
    return 0;
}