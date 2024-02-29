#include <iostream>

using namespace std;

int main(){
    char t[500];
    int i = 0;
    cin.get(t, 500);

    while (t[i] != '\0'){
        i += 1;
    }

    if (i <= 140){
        cout << "TWEET" << endl;
    }
    else{
        cout << "MUTE" << endl;
    }
    return 0;
}