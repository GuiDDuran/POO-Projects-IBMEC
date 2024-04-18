#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        string frase;
        getline(cin, frase);
        
        int letras[26] = {0};
        int count = 0;

        for (char c : frase){
            if(c >= 'a' && c <= 'z'){
                int index = c - 'a';
                if (letras[index] == 0) {
                    letras[index] = 1;
                    count++;
                }
            }
        }

        if (count == 26){
            cout << "frase completa" << endl;
        }else if( count >= 13){
            cout << "frase quase completa" << endl;
        }else{
            cout << "frase mal elaborada" << endl;
        }
    }
    return 0;
}