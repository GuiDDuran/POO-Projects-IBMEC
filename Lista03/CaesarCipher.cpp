#include <iostream>

using namespace std;

int main(){
    int key, n_tests;
    char text[51];

    cin >> n_tests;
    cin.ignore();

    while(n_tests){
        cin.get(text, 51);
        cin >> key;
        cin.ignore();
        for(int i = 0; text[i] != '\0'; i++){
            if(text[i] == 32){
                NULL;
            }else{
                text[i] = ((text[i] - 'A') - key + 26) % 26 + 'A';
            }
        }
        cout << text << endl;
        n_tests--;
    }
    return 0;
}