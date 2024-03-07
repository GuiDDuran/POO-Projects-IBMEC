#include <iostream>

using namespace std;

int main(){
    while (true){
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0){
            break;
        }
        int c = 2 * a - b;
        cout << c << endl;
    }
    return 0;
}