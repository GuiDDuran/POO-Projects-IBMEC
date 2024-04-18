#include <iostream>

using namespace std;

int main(){

    string n;
    cin >> n;
    for(int i = size(n); i > -1; i--){
        cout << n[i];
    }
    cout << endl;

    return 0;
}