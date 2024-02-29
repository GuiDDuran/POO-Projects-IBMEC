#include <iostream>
using namespace std;
int main() {
    char c[50];
    cin.get(c, 50);

    for(int i=0 ; c[i] != '\0'; i++){
        if (c[i] != 32){
            c[i] = c[i] - 32;
        }
    }
    cout << c << endl;
    return 0;
}