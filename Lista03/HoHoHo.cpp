#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; n; i++){
        cout << "Ho";
        if (n != 1){
            cout << " ";
        }else{
            cout << "!";
        }
        n--;
    }
    cout << endl;
    return 0;
}