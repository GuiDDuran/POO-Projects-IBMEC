#include <iostream>

using namespace std;

int main(){
    char c[500];
    int i = 0;
    cin.get(c, 500);

    while(c[i] != '\0'){
        i += 1;
    }
    
    if (i <= 80){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}