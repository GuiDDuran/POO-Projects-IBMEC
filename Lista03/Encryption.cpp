#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    cin.ignore();
    for(int i = 0; i < cases; i++){
        char text[50];
        cin.get(text, 50);
        for(int j = 0; text[j] != '\0'; j++){
            if (text[j] >= 65 && text[j] < 122){
                text[j] + 3;
            }
        }
        cout << text << endl;
    }
    return 0;
}