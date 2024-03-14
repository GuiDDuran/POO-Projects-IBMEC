#include <iostream>

using namespace std;

int length(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main(){
    int cases;
    cin >> cases;
    cin.ignore();
    for(int i = 0; i < cases; i++){
        char text[1000];
        char reversed_text[1000];
        cin.get(text, 1000);
        cin.ignore();

        for(int j = 0; text[j] != '\0'; j++){
            if(text[j] >= 65 && text[j] <= 90){
                text[j] = text[j] + 3;
            }else if(text[j] >= 97 && text[j] <= 122){
                text[j] = text[j] + 3;
            }else{
                NULL;
            }
        }

        int l = 0;
        for(int k = length(text) - 1; k >= 0; k--){
            reversed_text[l] = text[k];
            l++;
        }
        reversed_text[l] = '\0';  

        int len = length(reversed_text);
        for(int m = len / 2; m < len; m++){
            reversed_text[m]--;
        }
        cout << reversed_text << endl;
        
    }
    return 0;
}