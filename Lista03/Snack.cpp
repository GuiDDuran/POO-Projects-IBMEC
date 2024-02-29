#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x, y;
    float total;
    cin >> x >> y;
    if (x == 1){
        total = y * 4;
    } 
    if (x == 2){
        total = y * 4.5;
    } 
    if (x == 3){
        total = y * 5;
    } 
    if (x == 4){
        total = y * 2;
    } 
    if (x == 5){
        total = y * 1.5;
    }
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total;
    return 0;
}