#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    int c, d, result = 0;
    for(int i = 0; i < cases; i++){
        cin >> c >> d;
        if(c == 0 && d == 0){
            cout << 0 << endl;
        } else{
            result = pow(26, c) * pow(10, d);
            cout << result << endl;
        }
    }
    return 0;
}