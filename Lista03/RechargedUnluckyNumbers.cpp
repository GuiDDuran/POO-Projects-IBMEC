#include <iostream>

using namespace std;

bool lucky (char num[]){
    for (int i = 0; num[i] != '\0'; i++){
        if (num[i] == '1' && num[i + 1] == '3'){
            return true;
        }
    }
    return false;
}

int main(){
    char num[100];
    cin.get(num, 100);
    bool value = lucky(num);
    if (value == true){
        cout << num << " es de Mala Suerte" << endl;
    }
    else {
       cout << num << " NO es de Mala Suerte" << endl;
    }
    return 0;
}