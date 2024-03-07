#include <iostream>

using namespace std;

int main(){
    int key, n_tests;
    char text[50];
    char encrypt[50];

    cin >> n_tests;
    cin.ignore();

    while(n_tests){
        cin.get(text, 50);
        cin >> key;
        for(int i = 0; text[i] != '\0'; i++){
            encrypt[i] = text[i] - key;
        }
        
        cout << encrypt << endl;
        n_tests--;
    }
    return 0;
}