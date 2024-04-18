#include <iostream>

using namespace std;

int main(){
    double valores;
    int count = 0;
    for (int i = 0; i < 15; i++){
        cin >> valores;
        if (valores > 0){
            count++;
        }
    }
    cout << count << " valores positivos" << endl;
    return 0;
}