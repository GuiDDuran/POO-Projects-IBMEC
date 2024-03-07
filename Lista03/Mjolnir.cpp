#include <iostream>

using namespace std;

int main() {
    int cases, n;
    cin >> cases;
    for (int i = 0; i < cases; i++){
        char name[100];
        cin >> name >> n;
        if (name == "Thor"){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}