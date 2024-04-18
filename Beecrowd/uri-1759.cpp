#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        cout << "Ho";
        if(i != 1){
            cout << " ";
        }
        else{
            cout << "!" << endl;
        }
    }
}